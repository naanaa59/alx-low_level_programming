#include "lists.h"

/**
 * free_list - frees a list
 *
 * @head: the first element of a list
 *
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *temp;

	if (head == NULL)
		return;
	while (current != NULL)
	{
		temp = current->next;
		free(current->str);
		free(current);
		current = temp;
	}
	head = NULL;

}
