#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint - functions that free memory allocated
 * @head: pointer to the head oof the list
 */

void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;

		free(aux);
	}
}
