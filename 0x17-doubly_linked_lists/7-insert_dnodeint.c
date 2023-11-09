#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: the head
 *
 * @idx: index of the new node
 *
 * @n: data of the new node
 *
 * Return: the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *current;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL && idx != 0)
	{
		return (NULL);
	}
	current = *h;
	i = 0;
	while (current != NULL && i < idx)
	{
		current = current->next;
		i++;
	}
	if (current != NULL)
	{
		new->next = current;
		new->prev = current->prev;
		if (current->prev != NULL)
			current->prev->next = new;
		current->prev = new;
	}
	else
	{

		new->prev = NULL;
		new->next = NULL;
	}
	return (new);
}
