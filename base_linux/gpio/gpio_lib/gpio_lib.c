#include <gpiod.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i;
    int ret;
    char buf[10];

    // GPIO Controller Handle
    struct gpiod_chip *chip;
    //  GPIO Pin Handle
    struct gpiod_line *line;

    // Get GPIO Controller
    chip = gpiod_chip_open("/dev/gpiochip1");
    if (NULL == chip){
        printf("gpiod_chip_open error\n");
        return -1;
    }

    // Get GPIO Pin
    line = gpiod_chip_get_line(chip, 8);
    if (NULL == line){
        printf("gpiod_chip_get_line error\n");
        goto release_line;
    }

    // Set GPIO to output mode
    ret = gpiod_line_request_output(line, "led", 0);
    if (ret < 0){
        printf("gpiod_line_request_output error\n");
        goto release_chip;
    }

    for (i = 0; i < 10; i++)
    {
        gpiod_line_set_value(line, 1);
        printf("set pin value to 1.\n");
        usleep(500000);
        printf("set pin value to 0.\n");
        gpiod_line_set_value(line, 0);
        usleep(500000);
    }

release_line: 
    // Release GPIO pin
    gpiod_line_release(line);
release_chip:
    // Release GPIO controller
    gpiod_chip_close(chip);

    return 0;
}
