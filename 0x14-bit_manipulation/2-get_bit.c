#include "main.h"

/**
 * get_bit - function to give  the value of a bit at an ind
 * @n: the number to search
 * @index: the  index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitval;

	if (index > 63)
		return (-1);

	bitval = (n >> index) & 1;

	return (bitval);
}
