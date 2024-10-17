#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	if (argc >= 2)
	{
		printf("you enter: \"");
                for (i = 0; i < argc; i++)
		{
			printf("%s ", argv[i]);
		}
		printf("\"\n");
		printf("you enter %d strings\n", argc);
	}
	else
	{
		printf("hello, world! This is a C program.\n");
	}

	return 0;
}
