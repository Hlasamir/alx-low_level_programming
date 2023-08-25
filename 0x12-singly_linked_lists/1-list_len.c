#include <stdlib.h>
#include "lists.h"
/**
 * list_len: return number of elements in a linked list.
 * @h: Pointer to list_t list.
 * Return: num of elements to h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
