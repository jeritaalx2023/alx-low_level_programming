#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function to add a new node at the beginning of a linked list
 * @head: intial node
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *create_new;
	unsigned int len = 0;

	while (str[len])
		len++;
	create_new = malloc(sizeof(list_t));
	if (!create_new)
		return (NULL);
	create_new->str = strdup(str);
	create_new->len = len;
	create_new->next = (*head);
	(*head) = create_new;

	return (*head);
}
