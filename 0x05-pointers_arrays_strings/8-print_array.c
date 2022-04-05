#include "main.h"

/**
* print array
* followed by a newline
* @str
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d, ",a[i]);
	}
}
