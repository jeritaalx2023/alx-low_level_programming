#include "main.h"

/**
 * sqrt_root - Makes possible to evaluate from 1 to n
 * @a: same number as n
 * @n: number that iterates from 1 to n
 *
 * Return: On success 1.
 */
int sqrt_root(int a, int n)
{
	if (n * n  == a)
		return (n);
	else if (n * n > a)
		return (-1);
	return (sqrt_root(a, n + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_root(n, 1));
}
