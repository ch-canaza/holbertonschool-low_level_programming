#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint_end - adds elements at the end of a  linked list
 * @head: pointer to head of rhe list
 *@n: number of elements to add
 * Return: the address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{

	listint_t *new_node;
	listint_t *aux;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{

		*head = new_node;
	}
	else
	{
		aux = *head;
		while (aux->next != NULL)
		{
			aux = aux->next;
		}

		aux->next = new_node;
	}
	return (new_node);
}
