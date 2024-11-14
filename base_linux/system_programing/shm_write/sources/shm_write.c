#include <sys/types.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

#include "sem.h"

int main(void)
{
    int running = 1;
    void *shm = NULL;
    struct shared_use_st *shared = NULL;
    char buffer[BUFSIZ + 1]; // 保存输入的文字
    int shmid;
    int semid; // 信号量标识符

    // 创建共享内存
    shmid = shmget((key_t)1234, 4096, 0644 | IPC_CREAT);
    if (shmid == -1)
    {
        fprintf(stderr, "shmget failed\n");
        exit(EXIT_FAILURE);
    }

    // 将共享内存连接到当前进程的地址空间
    shm = shmat(shmid, (void *)0, 0);
    if (shm == (void *)-1)
    {
        fprintf(stderr, "shmat failed\n");
        exit(EXIT_FAILURE);
    }
    printf("Memory attached at %p\n", shm);

    /* 打开信号量，不存在则创建 */
    semid = semget((key_t)6666, 1, 0666 | IPC_CREAT);
    if (semid == -1)
    {
        printf("sem open fail\n");
        exit(EXIT_FAILURE);
    }

    // 向共享内存中写数据
    while (running)
    {
        printf("Enter some text:");
        fgets(buffer, BUFSIZ, stdin);
        strncpy(shm, buffer, 4096);

        /* 释放信号量 */
        sem_v(semid);

        /* 输入了 end，退出循环 /程序*/
        if(strncmp(buffer, "end", 3) == 0)
            running = 0;
    }

    // 把共享内存从当前进程中分离
    if (shmdt(shm) == -1)
    {
        fprintf(stderr, "shmdt failed\n");
        exit(EXIT_FAILURE);
    }

    sleep(2);
    exit(EXIT_SUCCESS);
}
