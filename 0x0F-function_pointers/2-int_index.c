#include "function_pointers.h"

/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: is the number of elements in the array array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}

