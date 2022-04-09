#include "main.h"

/**
* _strcpy - copy src to dest
* @dest: pointer to array
* @src : pinter to array
* return : dest
char *_strcpy(char *dest, char *src)
{
	char *tmp1, *tmp2;

	tmp1 = dest;
	tmp2 = tmp1;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	dest = tmp2;
	while (*tmp1 != '\0')
	{
		*tmp2 = *tmp1;
		tmp2++;
		tmp1++;
	}

	return (dest);
}
