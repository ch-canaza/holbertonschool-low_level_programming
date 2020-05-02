#include "lists.h"
/**
 *sum_dlistint - return the sum of every element in linked list
 *@head: pointer to first element in a list
 *Return: number of elements
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);

}
