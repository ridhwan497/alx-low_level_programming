#include <stdio.h>
#include <stdlib.h>

/**
*main - main function
*Description: program prints all possible combinations of two two-digit numbers
*Return: 0 
*/

int main(void)
{
	int num1; /*this variable is for the first digit*/
	int num2; /*this variable is for the second digit*/
	int num3; /*tis variable is for the third digit*/
	int num4; /*this variable is for the fourth digit*/

	for (num1 = 0; num1 < 10; num1++)
	{
		for(num2 = 0; num2 < 10; num2++)
		{
			for (num3 = 0; num3 < 10; num3++)
			{
				for (num4 = 0; num4 < 10; num4++)
				{
					if (num1 < num3 || (num1 == num3 && num2 < num4))
					{
						putchar(num1 + '0');
						putchar(num2 + '0');
						putchar(' ');
						putchar(num3 + '0');
						putchar(num4 + '0');
						if (num1 < 9 || num2 < 8)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
