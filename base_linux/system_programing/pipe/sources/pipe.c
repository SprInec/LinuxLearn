#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <error.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DATA_LEN 256
#define DELAY_TIME 1

int main(void)
{
    pid_t pid;
    int pipe_fd[2];
    char buf[MAX_DATA_LEN];
    const char data[] = "Pipe Test Program";
    int real_read, real_write;

    memset((void *)buf, 0, sizeof(buf));

    // 创建管道
    if (pipe(pipe_fd) < 0)
    {
        printf("pipe create error\n");
        exit(1);
    }

    // 创建一个子进程
    if ((pid = fork()) == 0)
    {
        // 子进程关闭写描述符，并通过使子进程暂停 3s 等待父进程已关闭相应的读描述符
        close(pipe_fd[1]);

        printf("Chile process create successfully!\n");
        sleep(DELAY_TIME * 3);

        if((real_read = read(pipe_fd[0], buf, MAX_DATA_LEN)) > 0) {
            printf("%d bytes read from the pipe is '%s'\n", real_read, buf);
        }
        else {
            printf("Child: pipe read error!\n");
        }

        // 关闭子进程读描述符
        close(pipe_fd[0]);

        exit(0);
    }
    else if (pid > 0)
    {
        close(pipe_fd[0]);

        sleep(DELAY_TIME);

        if ((real_write = write(pipe_fd[1], data, strlen(data))) != -1)
        {
            printf("Parent write %d bytes: '%s'\n", real_write, data);
        }

        // 关闭父进程写描述符
        close(pipe_fd[1]);

        // 收集子进程推出信息
        waitpid(pid, NULL, 0);

        exit(0);
    }
}