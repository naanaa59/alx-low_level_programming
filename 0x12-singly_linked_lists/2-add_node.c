#include "lists.h"

/**
 * add_node - adds new node at the beginning of a list
 *
 * @head: the head of the list
 *
 * @str: the string to be added
 *
 * Return: the adress of the new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}

