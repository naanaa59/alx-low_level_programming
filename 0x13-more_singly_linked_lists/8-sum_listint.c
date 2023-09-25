#include "lists.h"

/**
 * sum_listint - returns the sum of all data n
 *
 * @head: pointer to the first element
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

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
