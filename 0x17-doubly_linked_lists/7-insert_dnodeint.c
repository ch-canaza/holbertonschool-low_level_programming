#include "lists.h"
/**
 *insert_dnodeint_at_index - add node at a given index
 *@h: pointer to first element in the list
 *@n: const int(data)
 *@idx: position to insert data in
 *Return: dlistint_t
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	unsigned int i;
	dlistint_t *tmp = *h;

	if (!h || !new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		if (!*h)
		{
			new->next = NULL;
			new->prev = NULL; }
		else
		{
			new->prev = NULL;
			new->next = *h;
			(*h)->prev = new; }
		*h = new;
		return (new); }
	while (tmp)
	{
		if (idx == i + 1)
		{
			if (tmp->next == NULL)
			{
				new->next = NULL;
				new->prev = tmp;
				tmp->next = new; }
			else
			{
				new->next = tmp->next;
				new->prev = tmp;
				tmp->next = new;
				new->next->prev = new; }
			return (new);  }
		i++;
		tmp = tmp->next; }
	free(new);
	return (NULL); }
