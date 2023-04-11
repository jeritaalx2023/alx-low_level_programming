
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * *_strchr - writes the character c to stdout
 * @c: The character to print
 * @s: pointer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}

