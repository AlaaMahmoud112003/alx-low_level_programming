#include "dog.h"

/**
 * init_dog - initialition structure of type the dog
 * @d: pointer to the  structure
 * @name: pointer to the name of dog
 * @age:  the age of dog
 * @owner: pointer to the owner of dog
 *
 * Return: void (0)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
