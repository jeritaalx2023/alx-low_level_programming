#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * *_strcpy - pointer to string
 * @dest: The string destination copied
 * @src: The source string to be copied
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}

