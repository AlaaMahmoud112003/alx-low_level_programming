#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - return the length of the string
 * @s: evaluation to string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}

/**
 * *_strcpy - copy the string pointe to src
 * @dest: pointer to buffer which we copy the string
 * @src: string to copy
 *
 * Return: the pointer to  the dest
 */
char *_strcpy(char *dest, char *src)
{
	int xn, x;

	xn = 0;

	while (src[xn] != '\0')
	{
		xn++;
	}

	for (x = 0; x < xn; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';

	return (dest);
}

/**
 * new_dog - create to the new dog
 * @name: the name of dog
 * @age: the age of dog
 * @owner: the owner of dog
 *
 * Return: void (0)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int xn1, xn2;

	xn1 = _strlen(name);
	xn2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (xn1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (xn2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
