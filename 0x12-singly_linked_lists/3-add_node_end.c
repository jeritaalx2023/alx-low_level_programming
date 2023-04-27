#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *create_new;
	list_t *temp = *head;

	unsigned int len = 0;

	while (str[len])
		len++;
	create_new = malloc(sizeof(list_t));
	if (!create_new)
		return (NULL);
	create_new->str = strdup(str);
	create_new->len = len;
	create_new->next = NULL;

	if (*head == NULL)
	{
		*head = create_new;
		return (create_new);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = create_new;

	return (create_new);
}
