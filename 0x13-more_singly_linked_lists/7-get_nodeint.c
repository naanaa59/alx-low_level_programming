#include "lists.h"

/**
 * get_nodeint_at_index - retuns the nth node of a list
 *
 * @head: the pointer to the first element
 *
 * @index: index to the desired node
 *
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	current = head;
	i = 0;
	while (i < index && current != NULL)
	{
		current = current->next;
		i++;
	}
	if (i < index)
		return (NULL);
	return (current);
}
