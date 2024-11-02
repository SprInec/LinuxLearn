/**
 * @file i2c_mpu6050.h
 * @author SprInec (JulyCub@163.com)
 * @brief 
 * @version 0.1
 * @date 2024.10.29
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef   __I2C_MPU6050_H__
#define   __I2C_MPU6050_H__

#include <stdint.h>

/* Register Map */
#define SMPLRT_DIV 0x19
#define PWR_MGMT_1 0x6B
#define CONFIG 0x1A
#define ACCEL_CONFIG 0x1C

#define ACCEL_XOUT_H 0x3B
#define ACCEL_XOUT_L 0x3C
#define ACCEL_YOUT_H 0x3D
#define ACCEL_YOUT_L 0x3E
#define ACCEL_ZOUT_H 0x3F
#define ACCEL_ZOUT_L 0x40
#define GYRO_XOUT_H 0x43
#define GYRO_XOUT_L 0x44
#define GYRO_YOUT_H 0x45
#define GYRO_YOUT_L 0x46
#define GYRO_ZOUT_H 0x47
#define GYRO_ZOUT_L 0x48

// Slave Address MPU6050
#define Address 0x69

// Function Prototypes
int mpu6050_init(int fd, uint8_t addr);
int i2c_write(int fd, uint8_t addr, uint8_t reg, uint8_t val);
int i2c_read(int fd, uint8_t addr, uint8_t reg, uint8_t *val);
short GetData(int fd, uint8_t addr, unsigned char REG_Adddress);

#endif // __I2C_MPU6050_H__