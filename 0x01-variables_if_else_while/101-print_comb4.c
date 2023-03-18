#include <stdio.h>
#include <stdlib.h>

/**
*main - main function
*Description - program prints all possible different combinations of 3 digits
*Return: 0
*/

int main(void)
{
	int num1; /*this variable is for the first digit*/
	int num2; /*this variable is for the second digit*/
	int num3; /*this variable is for the third digit*/

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			for (num3 = 0; num3 < 10; num3++)
			{
				if (num1 < num2 && num2 < num3)
				{
					putchar(num1 + '0');
					putchar(num2 + '0');
					putchar(num3 + '0');
					if (num1 < 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

