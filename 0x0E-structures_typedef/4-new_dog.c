#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create to the new dog
 * @name: the name of dog
 * @age: the age of dog
 * @owner: the owner of dog
 *
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nx, ox, x;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (nx = 0; name[nx]; nx++);
		nx++;
	dog->name = malloc(nx * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (x = 0; x < nx; x++)
		dog->name[x] = name[x];
	dog->age = age;
	for (ox = 0; owner[ox]; ox++);
			ox++;
	dog->owner = malloc(ox * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (x = 0; x < ox; x++)
		dog->owner[x] = owner[x];
	return (dog);
}
