#include "main.h"
/**
* main - Entry
*
* Return 0
*/

int main(void)
{
	int i;
	char word[9];
	
	word = "_putchar";
	i=0;
	
	while (i < 8)
	{
		_putchar(word[i]);
		i++;
	}

	_putchar("\n");
	return (0);
}
