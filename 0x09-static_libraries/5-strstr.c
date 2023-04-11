#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * *_strstr - returns the pointer to the first haystick
 * @needle: The character to print
 * @haystack: pointer to characters to be matched
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}


