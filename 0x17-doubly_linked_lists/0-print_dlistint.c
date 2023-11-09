#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t
 *
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
