#include "lists.h"

/**
 *get_dnodeint_at_index - return nth node
 *@head: ppointer to first node
 *@index: index to look for
 *Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	unsigned int i = 0;
	dlistint_t *tmp = head;

	if (head == NULL)
		return (NULL);
	while (tmp)
	{
		if (index == i)
			return (tmp);
		tmp = tmp->next;
		if (i + 1 == index)
			return (tmp);
		i++;
	}

	return (NULL);
}
