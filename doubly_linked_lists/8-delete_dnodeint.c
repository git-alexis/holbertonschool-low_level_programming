#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int position = 0;
	dlistint_t *temp_point = *head;
	dlistint_t *previous_node;

	if (head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = temp_point->next;
		if (temp_point->next != NULL)
		{
			temp_point->next->prev = NULL;
		}
		free(temp_point);
		return (1);
	}

	while (temp_point != NULL && position < index)
	{
		previous_node = temp_point;
		temp_point = temp_point->next;
		position++;
	}

	if (temp_point == NULL)
	{
		return (-1);
	}

	previous_node->next = temp_point->next;
	if (temp_point->next != NULL)
		temp_point->next->prev = previous_node;

	free(temp_point);
	return (1);
}
