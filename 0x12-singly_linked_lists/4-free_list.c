#include<stdio.h>
#include<stdlib.h>
#include "lists.h"
/**
 * free_list - free allocated memory
 *@head: pointer to the firstnode
 */

void free_list(list_t *head)
{

	list_t *naux;

	while (head != NULL)
	{
		naux = head;
		head = head->next;
		free(naux->str);
		free(naux);
	}

}
