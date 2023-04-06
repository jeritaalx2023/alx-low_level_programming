#include "main.h"

/**
 * _puts_recursion -To Print a string followed by a new line
 * @s: string
 *
 * Return:  success 1.
 * On error, -1 is returned.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
