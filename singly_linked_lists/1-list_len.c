#include "lists.h"

size_t list_len(const list_t *h)
{
	size_t element_count = 0;

	while (h != NULL)
	{
		h = h->next;
		element_count++;
	}

	return (element_count);
}
