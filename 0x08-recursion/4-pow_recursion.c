#include "main.h"
/**
 * _pow_recursion - raises the integer to a defined pow
 * @x: Integer to be raised to the power of
 * @y: Power digit
 *
 * Return:  1  when @y is 0.
 * On error, -1 is returned
 */
int _pow_recursion(int x, int y)
{
	if (y == 1)
		return(x);
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
