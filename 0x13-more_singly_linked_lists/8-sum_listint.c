#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *sum_listint - get node throuht index
 *@head:pointer to first node
 *Return: nth node
 */

int sum_listint(listint_t *head)

{
	listint_t *aux;
	int sum;

	if (head == NULL)
		return (0);
	aux = head;
	sum = 0;

	while (aux != NULL)

	{
		sum += aux->n;
		aux = aux->next;

	}
		return (sum);
}
