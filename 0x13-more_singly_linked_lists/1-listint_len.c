#include "lists.h"

/**
 * listint_len - Return num of elements in linked lists.
 * @h: Linked list, type listint_t, traverse.
 * Return: Num of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
