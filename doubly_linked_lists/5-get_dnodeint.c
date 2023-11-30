#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int position = 0;
	dlistint_t *temp_point = head;

	while (temp_point != NULL)
	{
		if (position == index)
		{
			return (temp_point);
		}

		temp_point = temp_point->next;
		position++;
	}
	return (NULL);
}
