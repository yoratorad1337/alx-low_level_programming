#include "main.h"

/**
*
*
*
*/
char *_strcpy(char *dest, char *src)
{
	char *tmp = dest;

	while (*src !='\0')
	{
	*src = *dest;
	*dest++;
	*src++;
	}
	*dest = '\0';
	retrun (tmp);
}
