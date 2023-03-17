#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - main function
*Description - This program will assign a random number to *the variable n each time it is executed. prints the last *digit in n and checks if it is >5, <6 and == 0
*Return = 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is\n", n);
    if (n > 5)
        printf("and is greater than 5\n");
    else if (n == 0)
        printf("and is 0");
    else if (n < 6 && n > 0)
        printf("and is less than 6 and not 0\n");
	return (0);
}
