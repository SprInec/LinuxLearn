#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    pid_t result;

    printf("This is a fork demo!\n\n");

    result = fork();

    if (result == -1)
    {
        printf("Fork failed!\n");
    }
    else if (result == 0)
    {
        printf("The return value is %d, In child process.\nMy PID is %d\n\n", result, getpid());
    }
    else
    {
        printf("The return value is %d, In parent process.\nMy PID is %d\n\n", result, getpid());
    }

    return 0;
}
