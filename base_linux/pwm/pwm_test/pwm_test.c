/**
 * @file pwm_test.c
 * @author SprInec (JulyCub@163.com)
 * @brief 
 * @version 0.1
 * @date 2024.11.02
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

static char pwm_path[75];

static int pwm_config(const char *attr, const char *val)
{
    char file_path[100];
    int len;
    int fd;

    sprintf(file_path, "%s/%s", pwm_path, attr);
    if ((fd = open(file_path, O_WRONLY)) < 0) {
        perror("open error");
        return fd;
    }

    len = strlen(val);
    if (len != write(fd, val, len)) {
        perror("write error");
        close(fd);
        return -1;
    }

    close(fd);

    return 0;
}

int main(int argc, char *argv[])
{
    if (4 != argc) {
        fprintf(stderr, "Usage: $s <id> <period> <duty>\n", argv[0]);
        exit(-1);
    }

    printf("PWM config: id<%s>, period<%s>, duty<%s>\n", argv[1], argv[2], argv[3]);

    sprintf(pwm_path, "/sys/class/pwm/pwmchip%s/pwm0", argv[1]);
    if (access(pwm_path, F_OK)){
        char temp[100];
        int fd;
        sprintf(temp, "/sys/class/pwm/pwmchip%s/export", argv[1]);
        if (0 > (fd = open(temp, O_WRONLY))) {
            perror("open error");
            exit(-1);
        }

        if (1 != write(fd, "0", 1)) {
            perror("write error");
            close(fd);
            exit(-1);
        }
    }

    if (pwm_config("period", argv[2]))
        exit(-1);

    if (pwm_config("duty_cycle", argv[3]))
        exit(-1);

    pwm_config("enable", "1");
    getchar();

    exit(0);
}
