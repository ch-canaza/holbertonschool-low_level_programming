#include "lists.h"
#include <stdio.h>
/**
 * listint_len - h->n print lenht of a  linked list
 * @h: pointer to node head
 * Return: quantity of nodes.
 */

size_t listint_len(const listint_t *h)

{

	size_t counter = 0;

	while (h != NULL)
	{
		/*printf("%d\n", h->n);*/
		counter++;
		h = h->next;
	}
	return (counter);
}
