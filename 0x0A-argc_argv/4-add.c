#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	int nums, sum, i;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < argc - 1; i++)
		{
			if (isdigit(*argv[i]))
			{
				nums = atoi(argv[i + 1]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += nums;
	}

	return (0);
}