#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end
 *
 * @head: pointer of a pointer to the firs node
 *
 * @n: data of the new node
 *
 * Return: adress of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new;
	return (new);
}
