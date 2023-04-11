#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strspn - writes the length to stdout
 * @accept: The character to print
 * @s: String intial
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
