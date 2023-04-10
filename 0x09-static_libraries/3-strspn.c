#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

unsigned int _strspn(char *s, char *accept)
{
	return(strspn(s, accept));
}
