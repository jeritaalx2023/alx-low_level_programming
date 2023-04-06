#include "main.h"

/**
 * _strlen_recursion - gives  Length of String
 * @s: string to calculate length
 *
 * Return: On success 1. Length of a string
 */

int _strlen_recursion(char *s)
{
	return (*s ? (1 +  _strlen_recursion(++s)) : 0);
}
