#include <stdlib.h>
#include "main.h"

/**
 * *array_range - create array for integers
 * @min: lower range of values stored
 * @max: max range of values stored
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int x, Size;

	if (min > max)
		return (NULL);

	Size = max - min + 1;

	ptr = malloc(sizeof(int) * Size);

	if (ptr == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		ptr[x] = min++;

	return (ptr);
}
