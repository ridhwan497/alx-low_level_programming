#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* 
 *Main Function
 *This function gets a random number and outputs the number
 *whether its +ve, -ve or zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
    {
       printf("%d is positve",n);
    }
	else if (n == 0)
	{
		printf("%d is zero",n);
	}
	else
		printf("%d is negative",n);
	return (0);
}
