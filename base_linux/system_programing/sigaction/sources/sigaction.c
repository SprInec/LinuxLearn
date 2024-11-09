#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>

// 信号处理函数
void signal_handler(int signum)
{
    printf("\nThis signal number is %d\n", signum);

    if (signum == SIGINT)
    {
        printf("I have get SIGINT!\n");
        printf("The signal has been restored to the default processing mode!\n\n");

        /* 信号自动恢复为默认处理函数 */
    }
}

int main(void)
{
    struct sigaction act;

    printf("this is sigaction function test demo!\n\n");

    act.sa_handler = signal_handler;

    sigemptyset(&act.sa_mask);

    act.sa_flags = SA_RESETHAND;

    sigaction(SIGINT, &act, NULL);

    while(1)
    {
        printf("waiting for the SIGINT signal, please enter \"Ctrl + c\"\n");
        sleep(1);
    }

    exit(0);
}