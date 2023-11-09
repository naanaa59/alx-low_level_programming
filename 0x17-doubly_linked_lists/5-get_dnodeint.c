#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node based on index
 *
 * @head: the head pointer
 *
 * @index: the index of the node to get
 *
 * Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	size_t i = 0;

	node = head;
	while (node != NULL && i < index)
	{
		node = node->next;
		i++;
	}
	return (node);
}
