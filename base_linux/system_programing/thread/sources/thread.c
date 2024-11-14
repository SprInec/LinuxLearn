#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

// 要执行的线程
void *test_thread(void *arg)
{
    // sizeof(void *) == 8 and sizeof(int) == 4 (64 bits)
    int num = (unsigned long long)arg;

    printf("This is test thread, arg is %d\n", num);
    sleep(5);

    // 退出线程
    pthread_exit(NULL);
}

int main(void)
{
    pthread_t thread;
    void *thread_return;
    int arg = 520;
    int res;

    printf("start create thread\n");

    // 创建线程, 线程为 test_thread 函数
    res = pthread_create(&thread, NULL, test_thread, (void *)(unsigned long long)(arg));

    if (res != 0)
    {
        printf("create thread fail\n");
        exit(res);
    }

    printf("create threads success\n");
    printf("waiting for threads to finish...\n");

    // 等待线程终止
    res = pthread_join(thread, &thread_return);
    if (res != 0)
    {
        printf("thread exit fail\n");
        exit(res);
    }

    printf("thread exit ok\n");

    return 0;
}
