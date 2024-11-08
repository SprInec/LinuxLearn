#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    pid_t pid, child_pid;
    int status;

    pid = fork();

    if (pid < 0) {
        printf("Error fork!\n");
    }
    /* 子进程 */
    else if (pid == 0) {
        printf("I am a child process!\nmy pid is %d\n\n", getpid());
        /* 子进程休眠3秒 */
        sleep(3);

        printf("I am about to quit the process!\n\n");

        /* 子进程退出 */
        exit(0);
    }
    /* 父进程 */
    else {
        /* 等待子进程退出, 父进程阻塞 */
        child_pid = wait(&status);

        if (child_pid == pid) {
            printf("Get exit child process id: %d\n", child_pid);
            printf("Get child exit status: %d\n\n", status);
        } else {
            printf("Some error occurred!\n\n");
        }

        exit(0);
    }
}