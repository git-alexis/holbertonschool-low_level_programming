#include "hash_tables.h"

/***/

hash_node_t *hash_node_creation(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->key = strdup(key);

	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);

	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	return (new_node);
}

/***/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}

	new_node = hash_node_creation(key, value);

	if (new_node == NULL)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		new_node->next = NULL;
		ht->array[index] = new_node;
	}
	else
	{
		temp = ht->array[index];

		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = new_node;
		new_node->next = NULL;
	}

	return (1);
}
