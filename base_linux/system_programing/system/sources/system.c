#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    pid_t result;

    printf("This is a system demo!\n\n");

    result = system("ls -l &");

    printf("Done!\n\n");

    return result;
}