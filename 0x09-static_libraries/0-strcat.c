#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *_strncat(char *dest, char *src, int n)
{
	return(strncat(dest, src, n));
}
