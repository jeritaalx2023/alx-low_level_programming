#include "main.h"

/**
 * print_rev - This function prints a reverse string
 *
 * @s: This is the input string
 */
void print_rev(char *s)
{

	int count = 0;

	while	(*s)
	{
		s++;
		count++;
	}

		while	(count)
		{
			s--;
			_putchar(*s);
			count--;
		}
		_putchar('\n');
}

