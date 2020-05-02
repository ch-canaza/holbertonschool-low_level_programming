#include "lists.h"
/**
 *add_dnodeint- add node in the beginning
 *@head: pointer to head
 *@n: const int
 *Return: dlistint_t
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!head)
		return (NULL);
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;

	if (!(*head))
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	new->next = *head;
	(*head)->prev = new;
	(*head) = new;
	return (new);
}
