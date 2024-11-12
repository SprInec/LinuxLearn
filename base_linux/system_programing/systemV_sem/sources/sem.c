#include <sys/sem.h>
#include <sys/ipc.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

#include "sem.h"

/* 信号量初始化/赋值函数 */
int init_sem(int sem_id, int init_value)
{
    union semun sem_union;
    sem_union.val = init_value;

    if (semctl(sem_id, 0, SETVAL, sem_union) == -1)
    {
        perror("Initialize semaphore");
        return -1;
    }

    return 0;
}

/* 从系统中删除信号量的函数 */
int del_sem(int sem_id)
{
    union semun sem_union;
    if (semctl(sem_id, 0, IPC_RMID, sem_union) == -1)
    {
        perror("Delete semaphore");
        return -1;
    }
}

/* P 操作函数 */    
int sem_p(int sem_id)
{
    struct sembuf sops;
    sops.sem_num = 0;
    sops.sem_op = -1;
    sops.sem_flg = SEM_UNDO;

    if (semop(sem_id, &sops, 1) == -1)
    {
        perror("P operation");
        return -1;
    }

    return 0;
}

/* V 操作函数 */
int sem_v(int sem_id)
{
    struct sembuf sops;
    sops.sem_num = 0;
    sops.sem_op = 1;
    sops.sem_flg = SEM_UNDO;

    if (semop(sem_id, &sops, 1) == -1)
    {
        perror("V operation");
        return -1;
    }

    return 0;
}
