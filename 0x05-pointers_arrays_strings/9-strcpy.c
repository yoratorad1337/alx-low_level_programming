#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
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
