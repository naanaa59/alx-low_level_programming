#include "hash_tables.h"
/**
 * hash_table_set - adds an element to hash table
 *
 * @ht: the hash table
 * @key: is the key can not be empty string
 * @value: the value associated to the key . must be duplicated
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current;
	hash_node_t *new;

	if (!ht || !key || !value)
		return (0);
	index = key_index((unsigned  char *) key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(key, current->key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (!current->value)
				return (0);
			return (1);
		}
		current = current->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new);
		free(new->key);
		return (0);
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
