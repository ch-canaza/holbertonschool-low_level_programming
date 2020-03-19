#include "lists.h"


/**
 *add_node- print the length of a list in a struct
 *
 *@str: string to be added
 *@head: whath get the first pointer
 *Return:amount of elements
 */

list_t *add_node(list_t **head, const char *str)

{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	while (new_node != NULL)
	{
		new_node->str = strdup(str);
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	return (NULL);
}
