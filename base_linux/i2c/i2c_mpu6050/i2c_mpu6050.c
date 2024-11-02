/**
 * @file i2c_mpu6050.c
 * @author SprInec (JulyCub@163.com)
 * @brief 
 * @version 0.1
 * @date 2024.10.29
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <linux/i2c.h>
#include <linux/i2c-dev.h>
#include <sys/ioctl.h>
#include "i2c_mpu6050.h"

int main(int argc, char *argv[])
{
    int fd;
    fd = I2C_SLAVE;

    if (argc < 2) {
        printf("Wrong use!!!\n");
        printf("Usage: %s <dev>\n", argv[0]);
        return -1;
    }

    // Open file and enable read and write operations
    fd = open(argv[1], O_RDWR);
    if (fd < 0){
        printf("Error opening file: %s\n", argv[1]);
        exit(1);
    }

    mpu6050_init(fd, Address);

    while(1)
    {
        usleep(1000 * 10);
        printf("ACCE_X: %6d\n", GetData(fd, Address, ACCEL_XOUT_H));
        usleep(1000 * 10);
        printf("ACCE_Y: %6d\n", GetData(fd, Address, ACCEL_YOUT_H));
        usleep(1000 * 10);
        printf("ACCE_Z: %6d\n", GetData(fd, Address, ACCEL_ZOUT_H));
        usleep(1000 * 10);
        printf("GTRO_X: %6d\n", GetData(fd, Address, GYRO_XOUT_H));
        usleep(1000 * 10);
        printf("GTRO_Y: %6d\n", GetData(fd, Address, GYRO_YOUT_H));
        usleep(1000 * 10);
        printf("GTRO_Z: %6d\n\n", GetData(fd, Address, GYRO_ZOUT_H));
        sleep(1);
    }

    close(fd);
    return 0;
}

/**
 * @brief MPU6050 Init
 *
 * @param fd device file descriptor
 * @param addr address of the device
 * @return int 
 */
int mpu6050_init(int fd, uint8_t addr)
{
    i2c_write(fd, addr, PWR_MGMT_1, 0x00);
    i2c_write(fd, addr, SMPLRT_DIV, 0x07);
    i2c_write(fd, addr, CONFIG, 0x06);
    i2c_write(fd, addr, ACCEL_CONFIG, 0x01);
    return 0;
}

/**
 * @brief I2C write function
 * 
 * @param fd device file descriptor
 * @param addr address of the device
 * @param reg register address
 * @param val value to be written
 * @return int returns 0 if successful, -1 otherwise
 */
int i2c_write(int fd, uint8_t addr, uint8_t reg, uint8_t val)
{
    int retries;
    uint8_t data[2];

    data[0] = reg;
    data[1] = val;

    // Set address length: 0 express 7 bit address
    ioctl (fd, I2C_TENBIT, 0);

    // Set slave address
    if (ioctl(fd, I2C_SLAVE, addr) < 0)
    {
        printf("Error setting slave address\n");
        close(fd);
        return -1;
    }

    // Set retry ACK times
    ioctl(fd, I2C_RETRIES, 5);

    if (write(fd, data, 2) == 2){
        return 0;
    }
    else{
        return -1;
    }
}

/**
 * @brief I2C read function
 *
 * @param fd device file descriptor
 * @param addr address of the device
 * @param reg register address
 * @param val values
 * @return int returns 0 if successful, -1 otherwise
 */
int i2c_read(int fd, uint8_t addr, uint8_t reg, uint8_t *val)
{
    int retries;

    // Set address length: 0 express 7 bit address
    ioctl(fd, I2C_TENBIT, 0);

    // Set slave address
    if (ioctl(fd, I2C_SLAVE, addr) < 0)
    {
        printf("Error setting slave address\n");
        close(fd);
        return -1;
    }

    ioctl(fd, I2C_RETRIES, 5);

    if (write(fd, &reg, 1) == 1){
        if (read(fd, val, 1) == 1){
            return 0;
        }
    }
    else{
        return -1;
    }
}

/**
 * @brief Get the Data object
 *
 * @param fd device file descriptor
 * @param addr address of the device
 * @param REG_Address 
 * @return short 
 */
short GetData(int fd, uint8_t addr, unsigned char REG_Address)
{
    char H, L;

    i2c_read(fd, addr, REG_Address, &H);
    usleep(1000);
    i2c_read(fd, addr, REG_Address + 1, &L);
    return (H << 8) + L;
}

