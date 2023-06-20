#include "main.h"
/**
 * _memcpy - is a function that copies memory area
 * @dest: memory where  stored
 * @src: memory where  copied
 * *@n: number of bytes
 *
 * Return: copied memory with n byte changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j;
	int i = n;

	for (j = 0 ; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}

