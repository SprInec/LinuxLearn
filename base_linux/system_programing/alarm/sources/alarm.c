#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

#define ALARM_ONLY 0
#define ALARM_COVER 1

#if ALARM_ONLY
int main(void)
{
    printf("\nthis is an alarm test function\n\n");
    alarm(5);
    sleep(20);
    printf("end!\n");
    return 0;
}
#elif ALARM_COVER
int main(void)
{
    unsigned int seconds;

    printf("\ntihs is an alarm test function\n\n");

    seconds = alarm(20);
    printf("last alarm seconds is %d\n", seconds);

    printf("process sleep 5 seconds\n");
    sleep(5);

    printf("sleep woke up, reset alarm!\n\n");

    seconds = alarm(5);

    printf("last alarm seconds remaining is %d!\n\n", seconds);

    sleep(20);

    printf("end!\n");

    return 0;
}
#endif 

