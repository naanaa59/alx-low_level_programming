#include "lists.h"

/**
 * free_listint - frees a list
 *
 * @head: pointer to the first node
 *
 */
void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *tmp;

	if (head == NULL)
		return;
	current = head;
	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	head = NULL;
}
