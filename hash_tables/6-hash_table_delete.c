#include "hash_tables.h"

/***/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current, *temp;

	for (index = 0; index < ht->size; index++)
	{
		current = ht->array[index];

		while (current != NULL)
		{
			temp = current;
			current = current->next;

			free(temp->value);
			free(temp->key);
			free(temp);
		}
	}
}
