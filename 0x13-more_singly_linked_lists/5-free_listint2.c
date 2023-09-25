#include "lists.h"

/**
 * free_listint2 - frees a list and sets the head to null
 *
 * @head: pointer to the pointer to tfirst node
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *current;

	if (head == NULL)
		return;
	current = *head;

	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*head = NULL;


}
