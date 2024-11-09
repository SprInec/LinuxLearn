#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
    pid_t pid;
    int ret;

    // 创建子进程
    if ((pid = fork()) < 0){
        printf("Fork error!\n");
        exit(1);
    }

    if (pid == 0)
    {
        // 在子进程中使用 raise 函数发送 SIGSTOP 信号， 使子进程暂停
        printf("Child(pid: %d) is waiting for any signal\n\n", getpid());
        
        // 子进程停在这里
        raise(SIGSTOP);

        exit(0);
    }
    else 
    {
        // sleep a second
        sleep(1);

        // 在父进程中收集子进程发出的信号（不阻塞），并调用  kill 进行相应的操作
        if ((waitpid(pid, NULL, WNOHANG)) == 0){
            // 如果子进程没有结束，则向子进程发送 SIGKILL 信号杀死子进程
            if ((ret = kill(pid, SIGKILL)) == 0){
                printf("Parent kill %d\n\n", pid);
            }
        }

        // 等待子进程结束
        waitpid(pid, NULL, 0);

        exit(0);
    }
}