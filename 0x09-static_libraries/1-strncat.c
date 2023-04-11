#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * *_strncat - pointer  writes the character n  to stdout
 * @n: The character to print
 * @dest: destination string
 * @src:source string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}


