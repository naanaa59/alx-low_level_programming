#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n)
 *
 * @head: the head of a list
 *
 * Return: the sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	if (head == NULL)
		return (0);
	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
