#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint2 - functions that free memory allocated
 * @head: pointer to the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *aux;
	listint_t *aux2;

	aux2 = *head;

		while (aux2 != NULL && head != NULL)
	{
		aux = aux2;
		aux2 = aux2->next;

		free(aux);
	}
	*head = NULL;
}
