#include "lists.h"
/**
 *delete_dnodeint_at_index - delete a node at a given position
 *@head: pointer to head
 *@index: position to delete node in
 *Return: 1 on succes or -1 on fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = *head;

	if (!head)
		return (-1);
	while (tmp)
	{
		if (index == i)
		{
			*head = tmp->next;
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
		if (index == i + 1)
		{
			tmp->next->prev = tmp->prev;
			tmp->prev->next = tmp->next;
			free(tmp);
			return (1);
		}
		i++;
	}
	return (-1);
}
