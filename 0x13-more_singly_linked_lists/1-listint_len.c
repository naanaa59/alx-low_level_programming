#include "lists.h"

/**
 * listint_len - returns number of elements in list
 *
 * @h: header of the list
 *
 * Return: numbers of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		h = h->next;
		length++;
	}
	return (length);
}
