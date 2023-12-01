#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	hash_node_t *current;

	if (!ht || !ht->array)
		return;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			tmp = current->next;
			if (current->key)
				free(current->key);

			if (current->value)
				free(current->value);
			free(current);
			current = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
