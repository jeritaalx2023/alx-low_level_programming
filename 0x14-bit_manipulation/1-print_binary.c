 #include "main.h"

/**
 * print_binary -  function that prints the binary equivalent
 * @n: the number to be  printed in binary
 */
void print_binary(unsigned long int n)
{
	int j, read = 0;
	unsigned long int current;

	for (j = 63; j >= 0; j--)
	{
		current = n >> j;

		if (current & 1)
		{
			_putchar('1');
			read++;
		}
		else if (read)
			_putchar('0');
	}
	if (!read)
		_putchar('0');
}
