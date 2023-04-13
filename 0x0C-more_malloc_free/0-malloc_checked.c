#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *malloc_checked - Returns a pointer to the allocated memory
 * @b: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)

	{
		exit(98);
	}

	return (ptr);
}
