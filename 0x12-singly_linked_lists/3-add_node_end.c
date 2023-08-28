#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end: Adds new node to the end of a linked list.
 * @str: String to put in new node.
 * @head: Double pointer to list_t list.
 * Return: Address of new element , or NULL if it is failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}