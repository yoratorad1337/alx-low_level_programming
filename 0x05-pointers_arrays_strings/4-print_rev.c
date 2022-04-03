#include "main.h"



void print_rev(char *s)
{
	int num = strlen(s);
	for (int i = num; i >=0; i--);
		{
			_putchar("%c",s[i]);
		}
	_putchar("\n");

}
