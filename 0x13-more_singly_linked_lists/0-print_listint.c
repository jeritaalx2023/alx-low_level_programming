#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function  prints all the elements of a linked list
 * @h: pointer to header linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count_num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count_num++;
		h = h->next;
	}

	return (count_num);
}
