#include "main.h"

/**
* rev_string -reverse a string
* @s: string to be reversed
*/
void puts2(char *s)
{
	int i, len, len1;
	char tmp;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (i = 0; i < len; i++)
	{
		tmp = s[i];
		s[i] = s[len1];
		s[len1--] = tmp;
	}

}
