#include "main.h"

/**
*
*
*
*/
void swap_int(int *a, int *b)
{
	int num;
	num = (*a + *b);
	*a = num - *a;
	*b = num - *a;
}
