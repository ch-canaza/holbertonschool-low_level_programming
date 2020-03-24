#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *get_nodeint_at_index - get node throuht index
 *@head:pointer to first node
 *@index: index to get
 *Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	listint_t *n;
	unsigned int counter = 0;

	n = head; /*node to find*/

	while (counter < index && n != NULL)

	{
		n = n->next;
			counter++;
	}
	if (counter != index)

		return (NULL);
	return (n);
}
