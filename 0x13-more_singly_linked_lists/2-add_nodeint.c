#include "lists.h"

/**
 * add_nodeint - adds new  node at the beginning
 *
 * @head: pointer to the first node
 *
 * @n: data to add for the new node
 *
 * Return: adress of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);

}
