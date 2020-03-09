#include "dog.h"
#include <stdio.h>
/**
 * print_dog-structure
 * @d: pointer
 *
 *
 *
 * Resturn: 0
 */

void print_dog(struct dog *d)
{
	if (d)
	{
	if (d->name)
	{
		printf("name:%s\n", d->name);
	}
	else
	{
		printf("name: (nil)\n");
	}
	if (d->owner == NULL)
	{
		printf("nil");
	}
	else
	{
		printf("age: %f\n", d->age);
		printf("owner: %s\n", d->owner);
	}
	}
}
