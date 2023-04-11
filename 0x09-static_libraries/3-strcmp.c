#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strcmp - compares strings
 * @s1: source string to be compared
 * @s2: second string to be compared against
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strcmp(char *s1, char *s2)
{
	return (strcmp(s1, s2));
}
