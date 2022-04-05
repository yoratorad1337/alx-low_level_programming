#include "main.h"

/**
*
*
*
*/
void puts_half(char *str)
{
	int len, i, j, n;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	n = (len - 1 / 2);

	for (i = 0; i <= len; i++)
	{
		if (len / 2 == 0 && len / 2 == i)
		{
			for (j = i; j <= len; j++)
			{
				_putchar(str[j]);
			}
		}
		else if (len / 2 != 0)
		{
			for (j = i; j <= len; j++)
			{
				_putchar(str[j]);
			}
		}
			_putchar('\n');
	}
}
