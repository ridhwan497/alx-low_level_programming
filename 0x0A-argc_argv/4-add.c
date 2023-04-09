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
			if (isdigit(*argv[i + 1]))
			{
				nums = atoi(argv[i + 1]);
				sum  = sum + nums;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	
	return (0);
}