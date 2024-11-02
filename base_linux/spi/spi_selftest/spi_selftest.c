/**
 * @file spi_selftest.c
 * @author SprInec (JulyCub@163.com)
 * @brief SPI self communication test program.
 * @version 0.1
 * @date 2024.11.02
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <linux/spi/spidev.h>

#define SPI_DEV_PATH "/dev/spidev0.0"

unsigned char tx_buffer[100] = "hello the world!";
unsigned char rx_buffer[100];

int fd;

static unsigned mode = SPI_MODE_2;
static uint8_t bits = 8;
static uint32_t speed = 10000000;
static uint16_t delay;

void transfer(int fd, uint8_t const *tx, uint8_t const *rx, size_t len)
{
    int ret;

    struct spi_ioc_transfer tr = {
        .tx_buf = (unsigned long)tx,
        .rx_buf = (unsigned long)rx,
        .len = len,
        .delay_usecs = delay,
        .speed_hz = speed,
        .bits_per_word = bits,
        .tx_nbits = 1,
        .rx_nbits = 1
    };

    ret = ioctl(fd, SPI_IOC_MESSAGE(1), &tr);
    if (ret < 1)
        printf("can't send spi message\n");
}

void spi_init(void)
{
    int ret = 0;

    fd = open(SPI_DEV_PATH, O_RDWR);
    if (fd < 0)
        printf("can't open %s\n", SPI_DEV_PATH);

    ret = ioctl(fd, SPI_IOC_WR_MODE32, &mode);
    if (ret == -1)
        printf("can't set spi mode\n");

    ret = ioctl(fd, SPI_IOC_WR_BITS_PER_WORD, &bits);
    if (ret == -1)
        printf("can't set bits per word\n");

    ret = ioctl(fd, SPI_IOC_WR_MAX_SPEED_HZ, &speed);
    if (ret == -1)
        printf("can't set max speed hz\n");

    printf("spi mode: 0x%x\n", mode);
    printf("bits per word: %d\n", bits);
    printf("max speed: %d Hz (%d KHz)\n", speed, speed / 1000);
}

int main(int argc, char *argv[])
{
    spi_init();

    transfer(fd, tx_buffer, rx_buffer, sizeof(tx_buffer));

    printf("tx_buffer: \n %s\n", tx_buffer);
    printf("rx_buffer: \n %s\n", rx_buffer);

    close(fd);
    return 0;
}
