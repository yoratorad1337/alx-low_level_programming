#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>

int _putchar(char c);

/* 0.98 Battery */
void reset_to_98(int *n);

/*don't swap horses in crossing a stream*/
void swap_int(int *a, int *b);

/*defends itself against the risk of being read*/
int _strlen(char *s);

/* i fear the lack of them */
void _puts(char *str);

/* i have not got a reverse gear */
void print_rev(char *s);

#endif
