#include "lists.h"

/**
 * add_nodeint - Add new node at the beginning of a linked list.
 * @n: Data to insert in the new node.
 * @head: Pointer to the first node in list.
 * Return: Address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
