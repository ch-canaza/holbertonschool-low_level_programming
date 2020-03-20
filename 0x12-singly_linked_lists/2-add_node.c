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

	if (!head || !str)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);

	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);


}

/**
 * _strlen - Return the length of a string
 * @s: The string to be checked
 *
 * Return: The length of the string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
