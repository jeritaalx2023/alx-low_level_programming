#include <stdio.h>

void print_intro(void) __attribute__ ((constructor));

/**
 * print_intro - prints output  before the main
 * function is executed
 */


void print_intro(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
