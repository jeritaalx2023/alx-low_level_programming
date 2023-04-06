#include "main.h"

/**
 * factorial - calculates factorial of n
 * @n: integer for factorial calculation
 *
 * Return: 1 on success
 * On error, -1 is returned
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
