#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * *_memcpy - writes the character n to stdout
 * @n: The character to print
 * @src: Source string
 * @dest: destination space string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}


