#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

#define THREAD_NUMBER 3 // 线程数
#define REPEAT_NUMBER 4 // 每个线程中的小任务数

sem_t sem[THREAD_NUMBER];

// 线程函数
void *thread_func(void *arg)
{
    int num = (unsigned long long)arg;
    int delay_time = 0;
    int count = 0;

    // 等待信号量，进行 P 操作
    sem_wait(&sem[num]);

    printf("Thread %d is starting\n", num);
    for (count = 0; count < REPEAT_NUMBER; count++)
    {
        printf("\tThread %d: job %d \n", num, count);
        sleep(1);
    }

    printf("Thread %d finished\n", num);
    // 退出线程
    pthread_exit(NULL);
}

int main(void)
{
    pthread_t thread[THREAD_NUMBER];
    int i = 0, res;
    void * thread_ret;

    // 创建三个线程，三个信号量
    for (i = 0; i < THREAD_NUMBER; i++)
    {
        // 创建信号量，初始信号量值为 0
        sem_init(&sem[i], 0, 0);
        // 创建线程
        res = pthread_create(&thread[i], NULL, thread_func,
                             (void *)(unsigned long long)i);
        if (res != 0)
        {
            printf("Create thread %d failed\n", i);
            exit(res);
        }
    }

    printf("Create threads success\n Waiting for threads to finish...\n");
    
    // 按照顺序释放信号量 V 操作
    for (i = 0; i < THREAD_NUMBER; i++)
    {
        // 进行 V 操作
        sem_post(&sem[i]);
        // 等待线程执行完毕
        res = pthread_join(thread[i], &thread_ret);
        if (!res)
        {
            printf("Thread %d joined\n", i);
        }
        else
        {
            printf("Thread %d join failed\n", i);
        }
    }

    for (i = 0; i < THREAD_NUMBER; i++)
    {
        // 删除信号量
        sem_destroy(&sem[i]);
    }

    return 0;
}
