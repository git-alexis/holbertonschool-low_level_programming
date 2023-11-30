#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int position = 0;
	dlistint_t *temp_point = *h;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	while (temp_point != NULL)
	{
		if (position == idx)
		{
			new_node->next = temp_point;
			new_node->prev = temp_point->prev;

			if (new_node->next != NULL)
			{
				temp_point->prev = new_node;
			}
			if (new_node->prev != NULL)
			{
				new_node->prev->next = new_node;
			}
			if (idx == 0)
			{
				*h = new_node;
			}

			return (new_node);
		}

		temp_point = temp_point->next;
		position++;
	}

	free(new_node);
	return (NULL);
}
