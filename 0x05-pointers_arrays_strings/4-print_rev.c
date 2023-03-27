#include "main.h"

/**
 * main - prints a string, in reverse, followed by a new line.
 * @s: pointer to a string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	/*Variable Declarations*/
	int rev; /*reverse*/
	int len; /*length*/
	int temp; /*temporary*/

	len = 0; /*initialize length to 0*/
	for (rev = 0; rev < len/2; rev++) /*reverse loop*/
	{
		temp = s[rev]; /*store value of s[rev] in temp*/
		s[rev] = s[len - rev - 1]; /*swap values*/
		s[len - rev - 1] = temp;
	}
	_putchar('\n'); /*print new line*/
}
