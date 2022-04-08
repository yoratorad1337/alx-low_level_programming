#include "main.h"

/**
*
*
*
*/
char *_strcpy(char *dest, char *src)
{
	char tmp;

	tmp = *src;
	*src = *dest;
	*dest = tmp;

	retrun (dest);
}
