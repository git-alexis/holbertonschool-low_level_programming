#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int position = 0;
	dlistint_t *temp_point;
	dlistint_t *new_node;

	if (h == NULL)
		{
			return (NULL);
		}

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	temp_point = *h;

	while (temp_point != NULL && position < idx)
	{
		temp_point = temp_point->next;
		position++;
	}

	if (temp_point == NULL && position < idx)
	{
		free(new_node);
		return (NULL);
	}

	if (temp_point == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	
	new_node->next = temp_point;
	new_node->prev = temp_point->prev;
	temp_point->prev = new_node;
	new_node->prev->next = new_node;

	return (new_node);
}
