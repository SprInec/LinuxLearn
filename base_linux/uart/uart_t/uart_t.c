#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <termios.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/ioctl.h>

// LABEL:SECTION 1
const char default_path[] = "/dev/ttyS0";

int main(int argc, char *argv[])
{
    int fd;
    int res;
    char *path;
    char buf[1024] = "tty send test.\n";

    // LABEL:SECTION 2
    // Get the device path from command line argument
    // If no argument, use default path
    if (argc > 1) {
        path = argv[1];
    } 
    else {
        path = (char *)default_path;
    }

    // Get the device file descriptor
    printf("This is tty/usart demo.\n");
    fd = open(path, O_RDWR);
    if (fd < 0){
        printf("Fail to Open %s device.\n", path);
        return 0;
    }

    // LABEL:SECTION 3
    struct termios opt;
    // Clear the UART buffer
    tcflush(fd, TCIOFLUSH);
    // Get the UART parameters opt
    tcgetattr(fd, &opt);
    // Set the baud rate to 9600
    cfsetispeed(&opt, B9600);
    cfsetospeed(&opt, B9600);

    // Set the data bits to 8
    opt.c_cflag &= ~CSIZE;
    opt.c_cflag |= CS8;
    // Set the parity bit to none
    opt.c_cflag &= ~PARENB;
    opt.c_iflag &= ~INPCK;
    // Set the stop bit to 1
    opt.c_cflag &= ~CSTOPB;
    // Update the UART parameters
    tcsetattr(fd, TCSANOW, &opt);
    printf("Device %s is set to 9600bps, 8N1.\n", path);

    // LABEL:SECTION 4
    do {
        // Send the data to the device
        write(fd, buf, strlen(buf));
        // Receive the data from the device
        res = read(fd, buf, 1024);
        if (res > 0) {
            // Add '\0' to the end of the string
            buf[res] = '\n';
            buf[res+1] = '\0';
            printf("Receive res = %d bytes data: %s", res, buf);
        }
    } while (res >= 0);

    printf("read error, res = %d", res);
    close(fd);
    return 0;
}
