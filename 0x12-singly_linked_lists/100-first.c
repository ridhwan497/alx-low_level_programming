#include <stdio.h>

/**
 * before_main - function that prints a string before main executes
 */

void __attribute__ ((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
