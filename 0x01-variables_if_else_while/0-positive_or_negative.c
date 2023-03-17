#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
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
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
	return (0);
}
