#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (s[i] == accept[i] && s[i] != '\0' && accept[i] != '\0')
	{
		i++;
	}
	return (i);
}
