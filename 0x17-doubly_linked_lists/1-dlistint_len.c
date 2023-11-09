#include "lists.h"

/**
 * dlistint_len - returns the length of the list
 *
 * @h: head
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);

}
