#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 *print_list- print the list in a struct
 *
 *@h: pointer to head of list
 *Return:zero
 */


size_t print_list(const list_t *h)

{

	size_t size = 0;

	while (h != NULL)
	{
		if (h->str == NULL)

			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

			       h = h->next;
			       size++;

	}

	return (size);
}
