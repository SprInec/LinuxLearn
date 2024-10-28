/* ************************************************************************
> File Name:     uart_i.c
> Author:        SprInec
> Created Time:  2024年10月28日 星期一 17时01分00秒
> Description:   
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/ioctl.h>
#include <termios.h>
#include <string.h>

const char default_path[] = "/dev/ttyS0";

int main(int argc, char *argv[])
{
    int fd;
    int res;
    struct termios opt;
    char *path;
    char buf[1024] = "SprInec tty send test.\n";

    // Get device path from command line argument
    // or use default path /dev/ttyS0
    if (argc > 1){
        path = argv[1];
    }
    else {
        path = (char *)default_path;
    }

    // Open device file
    printf("This is tty/usart demo.\n");
    fd = open(path, O_RDWR);
    if (fd < 0){
        printf("Fail to Open %s device\n",path);
        return 0;
    }

    // Clearn uart description buffer
    tcflush(fd, TCIOFLUSH);

    // Get current uart parameters
    // tcgetattr(fd, TCGETS, &opt);
    res = ioctl(fd, TCGETS, &opt);
    opt.c_ispeed = opt.c_cflag & (CBAUD | CBAUDEX);
    opt.c_ospeed = opt.c_cflag & (CBAUD | CBAUDEX);

    // Print define baud rate macro
    printf("Macro B9600 = %#o\n", B9600);
    printf("Macro B115200 = %#o\n", B115200);

    // Print the value read from ictl TCGETS
    printf("ioctl TCGETS, opt.c_ospeed = %#o\n", opt.c_ospeed);
    printf("ioctl TCGETS, opt.c_ispeed = %#o\n", opt.c_ispeed);
    printf("ioctl TCGETS, opt.c_cflag = %#x\n", opt.c_cflag);
    speed_t change_speed = B9600;

    if (opt.c_ospeed == B9600){
        change_speed = B115200;
    }

    cfsetospeed(&opt, change_speed);
    cfsetispeed(&opt, change_speed);

    opt.c_cflag &= ~CSIZE;
    opt.c_cflag |= CS8;

    opt.c_cflag &= ~PARENB;
    opt.c_iflag &= ~INPCK;

    opt.c_cflag &= ~CSTOPB;

    // Update uart parameters
    // tcsetattr(fd, TCSETSW, &opt);
    res = ioctl(fd, TCSETS, &opt);

    // Read again uart parameters
    res = ioctl(fd, TCGETS, &opt);
    opt.c_ispeed = opt.c_cflag & (CBAUD | CBAUDEX);
    opt.c_ospeed = opt.c_cflag & (CBAUD | CBAUDEX);
    printf("ioctl TCGETS after TCSETS\n");

    // Print the value read from ictl TCGETS
    printf("ioctl TCGETS, opt.c_ospeed = %#o\n", opt.c_ospeed);
    printf("ioctl TCGETS, opt.c_ispeed = %#o\n", opt.c_ispeed);
    printf("ioctl TCGETS, opt.c_cflag = %#x\n", opt.c_cflag);

    do {
        write(fd, buf, strlen(buf));
        res = read(fd, buf, sizeof(buf));
        if (res > 0){
            buf[res] = '\n';
            buf[res+1] = '\0';
            printf("Receive res = %d bytes data : %s\n", res, buf);
        }
    } while (res > 0);

    printf("read error, res = %d\n", res);
    close(fd);
    return 0;
}
