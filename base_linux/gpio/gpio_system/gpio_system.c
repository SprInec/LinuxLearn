#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    pid_t result;
    int i;
    for (i = 0; i < 10; i++)
    {
        result = system("gpioset 1 8=1");
        printf("set the pin value to 1.\n");
        usleep(500000);
        result = system("gpioset 1 8=0");
        printf("set the pin value to 0.\n");
        usleep(500000);
    }

    return result;
}
