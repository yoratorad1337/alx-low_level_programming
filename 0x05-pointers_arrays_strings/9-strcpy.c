#include "main.h"

/**
*
*
*
*/
char *_strcpy(char *dest, char *src)
{
	char *tmp = dest, *tmp1;

	while (*src !='\0')
	{
	*src = *dest;
	dest++;
	src++;
	}
	*dest = *tmp1;
	while (*tmp != '\0');
	{
		*tmp1 = *tmp;
		tmp1++;
		tmp++;
	}

	*dest = '\0';
	retrun (dest);
}
