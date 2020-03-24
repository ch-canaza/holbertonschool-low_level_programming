#include <stdlib.h>
#include "lists.h"

/**
 *pop_listint - deletes the head of a linked list
 * @head: pointer to the head of the list
 * Return: returns the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	/*listint_t *aux;*/
	listint_t *aux2;
	int n;

	/*if list is empty*/
	if (*head == NULL)
		return (0);

	/*give head value to aux2*/
	aux2 = *head;

		{
	/*head is now pointer to next node */
		*head = aux2->next;

		/*n is now pointer to next value*/
		n = aux2->n;
		free(aux2);

		}
		return (n);
}
