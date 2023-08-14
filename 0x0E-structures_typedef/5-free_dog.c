#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the dogs
 * @d: the pointer to free dog 
 *
 * Return: void (0)
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
