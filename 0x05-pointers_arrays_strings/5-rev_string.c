#include "main.h"

/**
*
*
*
*/
void puts2(char *str)
{
	int i, j, num;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	num = i;

	for (j = num - 1; j >= 0; j--)
	{
		*str = str[j];
	}

	_putchar('\n');
}
