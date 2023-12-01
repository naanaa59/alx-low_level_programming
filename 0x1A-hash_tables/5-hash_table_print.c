#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 *
 * @ht: the hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int flag_first = 1;

	if (ht && ht->array)
	{
		printf("{");

		for (i = 0; i < ht->size; i++)
		{
			current = ht->array[i];

			while (current)
			{
				if (!flag_first)
					printf(", ");
				printf("'%s' : '%s'", current->key, current->value);
				flag_first = 0;
				current = current->next;
			}
		}
		printf("}\n");
	}
	else
		printf("{}\n");
}
