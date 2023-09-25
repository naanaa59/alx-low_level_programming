#include "lists.h"

/**
 * pop_listint - deletes the head node
 *
 *@head: pointer to the pointer to the head
 *
 * Return: data of the deleted node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *first;

	if (head == NULL || *head == NULL)
		return (0);
	first = *head;
	n = first->n;
	*head = (*head)->next;
	free(first);
	return (n);
}

