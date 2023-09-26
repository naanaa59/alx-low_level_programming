#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: pointer to a pointer to the first element
 *
 * @idx: the index of the list where to insert the node
 *
 * @n: data of the new node
 *
 * Return: adress of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		(*head)->next = new;
		return (new);
	}
	current = *head;
	i = 0;
	while (i < idx && current != NULL)
	{
		current = current->next;
		i++;
	}
	new->next = current->next;
	current->next = new;
	if (i < idx)
		return (NULL);

	return (new);


}
