#ifndef DOG_H
#define DOG_H
/**
 * struct dog-structure
 * @name: name of the instance
 * @age: age of the instance
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
