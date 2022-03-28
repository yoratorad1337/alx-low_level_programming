#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to first value
 * @b: pointer to second value
 */
void swap_int(int *a, int *b)
{
	int num;
	
	num = (*a + *b);
	*a = num - *a;
	*b = num - *a;
}
