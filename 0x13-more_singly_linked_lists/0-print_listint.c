#include "lists.h"

/**
 * print_listint - h->n print the wole linked list
 * @h: pointer to node head
 * Return: quantity of nodes.
 */

size_t print_listint(const listint_t *h)
{

	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
