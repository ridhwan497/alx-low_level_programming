#include <stdio.h>

int main(int argc, char *argv[])
{
	int num1, num2, mul;

	mul = 0;

	if (argc ==3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
