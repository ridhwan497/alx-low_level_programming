#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - main function
*Description - Program assigns a random number to n. 
*prints the last *digit in n and checks if it is >5, <6 and == 0
*Return: 0
*/
int main(void)
{
	int n;
    
	srand(time(0));
	n = rand() - RAND_MAX / 2;
    int last_digit = n % 10;
	printf("Last digit of %d is %d", n, last_digit);
    if (last_digit > 5)
        printf("and is greater than 5\n");
    else if (last_digit == 0)
        printf("and is 0");
    else if (last_digit < 6 && last_digit > 0)
        printf("and is less than 6 and not 0\n");
    else
        printf("...\n");
    return (0);
}
