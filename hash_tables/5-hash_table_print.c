#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *current;

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	for (; index < ht->size; index++)
	{
		current = ht->array[index];

		while (current != NULL)
		{
			printf("'%s': '%s'", current->key, current->value);

			if (current->next != NULL)
			{
				printf(", ");
			}

			current = current->next;
		}
	}

	printf("}");
	printf("\n");
}
