#include "lists.h"


/**
 *list_len- print the length of a list in a struct
 *
 *@h: pointer to head of list
 *Return:zero
 */


size_t list_len(const list_t *h)

{
	size_t size = 0; /*initialize counter */

		while (h != NULL)
		{
			size++;
			h = h->next;

		}

	return (size);
}
