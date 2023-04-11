#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * *_strncpy - writes the character n to stdout
 * @n: The character to print
 * @dest: destination string copied
 * @src: source string copied
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}

