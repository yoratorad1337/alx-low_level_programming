#include "main.h"

/**
* print array - print a given array followed by a newline
* @a: pointer to an array
* @n: number of elemnts
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
