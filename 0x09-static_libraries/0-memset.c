#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * *_memset - writes the character n to stdout
 * @n: The character to print
 * @b:source
 * @s: pointer to memory space
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}


