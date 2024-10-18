#include <stdio.h>
#include <getopt.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief: 打印帮助信息
 */
void usage(const char *argv_0)
{
	printf("\nUsage %s: [-option] \n", argv_0);
	printf("[-a] hello!\n");
	printf("[-b] I am LubanCat\n");
	printf("[-c <str>] str\n");
	printf("[-d <num>] printf num of '*' (num < 100)\n");
	printf("[-h] get help\n");
	exit(1);
}

/**
 * @brief: 打印 n 个 * 号
 */
void d_option(char *num_str)
{
	int num, i;
	int ge, shi;

	shi = (char)num_str[0] - 48;
	ge = (char)num_str[1] - 48;
	num = shi * 10 + ge;

	for (i = 0; i < num; i++)
	{
		printf("*");
	}
	printf("*\n");
}

int main(int argc, char **argv)
{
	int i;
	int opt;

	while ((opt = getopt(argc, argv, "c:d:abh")) != -1)
	{
		switch (opt)
		{
		case 'a':
			printf("hello!\n");
			break;
		case 'b':
			printf("I am LubanCat\n");
			break;
		case 'c':
			if (optarg)
			{
				if (optarg[0] == '-')
				{
					usage(argv[0]);
				}
				else
				{
					printf("%s\n", optarg);
				}
			}
			else
			{
				usage(argv[0]);
			}
			break;
		case 'd':
			if (optarg)
			{
				if (optarg[0] == '-')
				{
					usage(argv[0]);
				}
				else
				{
					if (strlen(optarg))
					{
						d_option(optarg);
					}
					else
					{
						usage(argv[0]);
					}
				}
			}
			else
			{
				usage(argv[0]);
			}
			break;
		default:
			usage(argv[0]);
			break;
		}
	}

	return 0;
}
