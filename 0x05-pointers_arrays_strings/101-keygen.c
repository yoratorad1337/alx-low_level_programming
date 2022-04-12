#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int num;
	char str;

	str = "Tada! Congrates";
	srand( time( 0 ));
	num = rand();
	printf("%s\n", str);
	return (0);
}
