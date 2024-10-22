#include <unistd.h>

int main(void)
{
	write(1, "hello, world! This is a C program.\n", 35);
	write(1, "output i=0\n", 11);
	return 0;
}
