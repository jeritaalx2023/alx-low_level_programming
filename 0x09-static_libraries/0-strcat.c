#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * *_strcat - writes the character dest to stdout
 * @dest: The character to print
 * @src: source string to be concartenated
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}

