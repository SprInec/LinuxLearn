#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
    int err;

    printf("This is a exec function test demo!\n\n");

    err = execl("/bin/ls", "ls", "-la", NULL);

    if (err < 0)
    {
        printf("execl fail!\n\n");
    }

    printf("Done!\n\n");
    
}