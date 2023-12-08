#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *current;
	int first_node = 1;

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
			if (first_node == 0)
			{
				printf(", ");
			}

			printf("'%s': '%s'", current->key, current->value);

			first_node = 0;
			current = current->next;
		}
	}

	printf("}");
	printf("\n");
}
