#include "main.h"



void print_rev(char *s)
{
	int num = strlen(s);
	int i = 0;
	while (num >= 0)
		{
			_putchar("%c",s[i]);
		}
	_putchar("\n");

}
