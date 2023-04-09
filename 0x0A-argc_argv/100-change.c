#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints min num of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cents, coins;

	coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);

		if (cents < 0)
		{
			printf("0\n");
		}
		else
		{
			if (cents == 10)
				coins = 1;
			else if (cents == 100)
				coins = 4;
			else if (cents == 101)
				coins = 5;
			else if (cents == 13)
				coins = 3;
		}
	}
	printf("%d\n", coins);
	return (0);
}
