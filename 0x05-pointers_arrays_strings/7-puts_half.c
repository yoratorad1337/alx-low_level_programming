#include "main.h"

/**
*
*
*
*/
void puts_half(char *str)
{
	int len, i, j;

	len = 0;

	while (str[len] != '\0');
	{
		len++;
	}

	for (i = 0; i <= len - 1; i++)
	{
		if (len / 2 == i)
		{
			for (j = i; j <= len; j++)
			{
				_putchar(str[j]);
			}
			if (len / 2 == 1)
			{
				_putchar(str[len-1]);
			}
		}
	}
}
