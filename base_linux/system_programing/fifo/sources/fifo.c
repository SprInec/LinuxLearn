#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

// 命名管道文件名
#define MYFIFO "myfifo"

// 4096 定义在 limits.h 文件中
#define MAX_BUFFER_SIZE PIPE_BUF

void fifo_read(void)
{
    char buff[MAX_BUFFER_SIZE];
    int fd;
    int nread;

    printf("**************************** read fifo ****************************\n");
    if (access(MYFIFO, F_OK) == -1)
    {
        if ((mkfifo(MYFIFO, 0666) < 0) && (errno != EEXIST)) 
        {
            printf("Cannot create fifo file\n");
            exit(1);
        }
    }

    // 以只读阻塞方式打开命名管道
    fd = open(MYFIFO, O_RDONLY);
    if (fd == -1)
    {
        printf("Open fifo file error\n");
        exit(1);
    }

    memset(buff, 0, sizeof(buff));

    if ((nread = read(fd, buff, MAX_BUFFER_SIZE)) > 0)
    {
        printf("Read '%s' from FIFO\n", buff);
    }

    printf("**************************** close fifo ****************************\n");

    close(fd);

    exit(0);
}

void fifo_write(void)
{
    int fd;
    char buff[] = "this is a fifo test demo";
    int nwrite;

    // 等待子进程先运行
    sleep(2);

    // 以只写阻塞方式打开 FIFO 管道
    fd = open(MYFIFO, O_WRONLY | O_CREAT, 0644);
    if (fd == -1)
    {
        printf("Open fifo file error\n");
        exit(1);
    }

    printf("Write '%s' to FIFO\n", buff);

    // 向管道中写入字符串
    nwrite = write(fd, buff, MAX_BUFFER_SIZE);

    // 等待子进程退出
    if (wait(NULL))
    {
        close(fd);
        exit(0);
    }
}

int main(void)
{
    pid_t result;
    result = fork();

    if (result == -1)
    {
        printf("Fork error!\n");
    }

    // 返回值为 0 代表子进程
    else if (result == 0)
    {
        fifo_read();
    }

    // 返回值大于 0 代表父进程
    else
    {
        fifo_write();
    }

    return result;
}