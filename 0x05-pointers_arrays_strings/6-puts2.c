#include "main.h"

/**
*
*
*/
void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for ( i = 0; i <= len; i++)
	{
		if (len % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
}
