#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>

// Select a demo
#define SIG_INT 0
#define FUNC_SIGNAL 1


#if !(SIG_INT || FUNC_SIGNAL)
#error "Please select a demo"
#endif


#if SIG_INT
int main(void)
{
    printf("\nThis is an signal test function\n\n");

    while(1)
    {
        printf("waiting for the SIGINT signal, please enter \"Ctrl + c\"\n");
        sleep(1);
    }

    exit(0);
}
#elif FUNC_SIGNAL
// 信号处理函数
void signal_handler(int signum)
{
    printf("This signal number is %d\n", signum);

    if (signum == SIGINT)
    {
        printf("I have get SIGINT!\n");
        printf("The signal has been restored to the default processing mode!\n\n");

        // 恢复信号为默认情况
        signal(SIGINT, SIG_DFL);
    }
}

int main(void)
{
    printf("\n this is an signal test function\n\n");

    // 设置信号处理函数
    signal(SIGINT, signal_handler);

    while(1)
    {
        printf("waiting for the SIGINT signal, please enter \"Ctrl + c\"\n");
        sleep(1);
    }

    exit(0);
}
#endif 


