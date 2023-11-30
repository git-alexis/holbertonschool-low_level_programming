#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		return (0);
	}
	else
	{
		int element_sum = 0;
		dlistint_t *temp_point = head;

		while (temp_point != NULL)
		{
			element_sum += temp_point->n;
			temp_point = temp_point->next;
		}

		return (element_sum);
	}
}
