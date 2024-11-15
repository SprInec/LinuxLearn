#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define THREAD_NUMBER 3 // 线程数

pthread_mutex_t mutex;

void *thread_func(void *arg)
{
    // sizeof(void *) == 8 and sizeof(int) == 4 (64 bits)
    int num = (unsigned long long)arg;
    int sleep_time = 0;
    int res;

    // 互斥锁上锁
    res = pthread_mutex_lock(&mutex);
    if (res)
    {
        // 获取失败
        printf("Thread %d lock failed\n", num);

        // 互斥锁解锁
        pthread_mutex_unlock(&mutex);

        pthread_exit(NULL);
    }

    printf("Thread %d is hold mutex\n", num);

    // 睡眠一定时间
    sleep(2);

    printf("Thread %d freed mutex\n\n", num);

    // 互斥锁解锁
    pthread_mutex_unlock(&mutex);

    pthread_exit(NULL);
}

int main(void)
{
    pthread_t thread[THREAD_NUMBER];
    int num = 0, res;

    srand(time(NULL));

    // 互斥锁初始化
    pthread_mutex_init(&mutex, NULL);
    for (num = 0; num < THREAD_NUMBER; num++)
    {
        // 创建线程
        res = pthread_create(&thread[num],NULL,
                            thread_func,
                            (void *)(unsigned long long)num);
        if (res != 0)
        {
            printf("Create thread %d failed\n", num);
            exit(res);
        }
    }

    for (num = 0; num < THREAD_NUMBER; num++)
    {
        // 等待线程结束
        pthread_join(thread[num], NULL);
    }

    // 销毁互斥锁
    pthread_mutex_destroy(&mutex);

    return 0;
}
