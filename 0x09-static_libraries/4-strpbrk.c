#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * *_strpbrk  - writes the character accept to stdout
 * @accept: The character to print
 * @s: the source
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}

