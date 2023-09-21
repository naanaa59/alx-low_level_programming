#include "lists.h"

/**
 * list_len - returns the numbers of elements in a list
 *
 * @h: the linked list
 *
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
