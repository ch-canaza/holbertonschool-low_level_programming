#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly
 *linked list of integers in ascending order using the Insertion sort algorithm
 * @list: pointer to the list
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp1;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	temp1 = (*list)->next;

	while (temp1)
	{
		while (temp1->prev != NULL && temp1->n < temp1->prev->n)
		{
			temp1->prev->next = temp1->next;
			if (temp1->next != NULL)
				temp1->next->prev = temp1->prev;
			temp1->next = temp1->prev;
			temp1->prev = temp1->prev->prev;
			temp1->next->prev = temp1;
			if (temp1->prev == NULL)
				(*list) = temp1;
			else
			{
				temp1->prev->next = temp1;
			}
			print_list(*list);
		}
		temp1 = temp1->next;
	}
}
