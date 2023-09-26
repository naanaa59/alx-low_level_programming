#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at indec of a list
 *
 * @head: pointer to pointer to the first
 *
 * @index: the node the delete
 *
 * Return: 1 if it succeeded -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	int flag;
	listint_t *current, *tmp;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
		flag = -1;
	}
	else
	{
		current = *head;

		i = 0;
		while (i < index - 1 && current->next != NULL)
		{
			current = current->next;
			i++;
		}
		if (i == index - 1 && current->next != NULL)
		{
			tmp = current->next;
			current->next = tmp->next;
			free(tmp);
			flag = 1;
		}
	}
		return (flag);
}
