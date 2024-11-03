/**
 * @file framebuffer.c
 * @author SprInec (JulyCub@163.com)
 * @brief 
 * @version 0.1
 * @date 2024.11.02
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <sys/types.h>  // open 需要的头文件
#include <sys/stat.h>
#include <fcntl.h>      // 打开文件需要的头文件
#include <unistd.h>     // write read 系统调用头文件
#include <sys/types.h>  
#include <sys/mman.h>   // mmap 内存映射相关函数库
#include <stdlib.h>     // malloc free 动态内存申请和释放函数头文件
#include <string.h>
#include <linux/fb.h>   // 包含 framebuffer 相关的头文件
#include <sys/ioctl.h>  // ioctl 系统调用头文件

// 32 位的颜色
#define Black 0x00000000
#define White 0xFFFFFFFF
#define Red   0xFFFF0000
#define Green 0xFF00FF00
#define Blue  0xFF99FFFF

int fd;
unsigned int *fb_mem = NULL; // 设置显存的位数为 32 位
struct fb_var_screeninfo var;
struct fb_fix_screeninfo fix;

int main(void)
{
    unsigned int i;
    int ret;
    char input_char;

    // 打开 framebuffer 设备
    fd = open("/dev/fb0", O_RDWR);
    if (fd == -1) {
        perror("Open LCD");
        return -1;
    }

    // 获取屏幕的可变参数
    ioctl(fd, FBIOGET_VSCREENINFO, &var);
    // 获取屏幕的固定参数
    ioctl(fd, FBIOGET_FSCREENINFO, &fix);


    // 打印分辨率
    printf("xres = %d, yres = %d\n", var.xres, var.yres);
    // 打印总字节数和每行的长度
    printf("line_length = %d, smem_len = %d\n", fix.line_length, fix.smem_len);
    printf("xpanstep = %d, ypanstep = %d\n", fix.xpanstep, fix.ypanstep);

    // 获取显存, 映射内存
    fb_mem = (unsigned int *)mmap(NULL, var.xres * var.yres * 4, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    
    if (fb_mem == MAP_FAILED){
        perror("Mmap LCD");
        return -1;
    }
 
    // 清屏
    memset(fb_mem, 0xff, var.xres * var.yres * 4);
    sleep(1);

    for (char j = 0; j < 5; j++)
    {
        // 将屏幕填充为白色
        for (i = 0; i < var.xres * var.yres; i++)
            fb_mem[i] = White;
        sleep(1);

        // 将屏幕填充为红色
        for (i = 0; i < var.xres * var.yres; i++)
            fb_mem[i] = Red;
        sleep(1);

        // 将屏幕填充为绿色
        for (i = 0; i < var.xres * var.yres; i++)
            fb_mem[i] = Green;
        sleep(1);

        // 将屏幕填充为蓝色
        for (i = 0; i < var.xres * var.yres; i++)
            fb_mem[i] = Blue;
        sleep(1);
    }

    // 清屏
    memset(fb_mem, 0x00, var.xres * var.yres * 4);

    // 映射后的地址, 通过 mmap 返回的值
    munmap(fb_mem, var.xres * var.yres * 4);

    close(fd); // 关闭 fb0 设备文件
    return 0;
}
