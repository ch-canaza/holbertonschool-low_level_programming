#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
char *_strcpy(char *dest, char *src);

/**
* _strcpy - function that copies a string
* @dest: pointer of destination
* @src: string to copy
* Return: the pointer to dest
**/

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

/**
* new_dog - function that creates a new dog.
* @name: new name
* @age: new age
* @owner: new owner
* Return: instance
**/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0;
	char *name_storage;
	char *owner_storage;
	dog_t *new_perrito;

	while (name[i])/*strlen of *name*/
		i++;
	while (owner[j])/*strlen of owner*/
		j++;
	name_storage =  malloc(i + 1); /*memory allocation of name*/
	if (!name_storage)
		return (NULL); /*malloc space verifcation*/
	owner_storage = malloc(j + 1);/*memory allocation of owner*/
	if (!owner_storage)
	{
		free(name_storage);/*if second  copy does not work free first*/
		return (NULL); /*guaranty both of them exist*/
	}
	new_perrito = malloc(sizeof(dog_t));/*malloc newstruct*/
	if (!new_perrito)/*if no allocate newstruct*/
	{
		free(name_storage);
		free(owner_storage);/*free attributes of the struct*/
		return (NULL);
	}
	_strcpy(name_storage, name);/*create a copy of the attributes*/
	_strcpy(owner_storage, owner);

	new_perrito->name = name_storage; /*asignment */
	new_perrito->age = age;
	new_perrito->owner = owner_storage;

	return (new_perrito);/*return struct*/
}
