#include "function_pointers.h"

/**
 * array_iterator - the function gives as a
 * parameter on the element of array.
 *
 * @array: the array to be executed function on
 * @size: the size of array
 * @action: the pointer to the function you need to be used
 *
 * Return: void (0)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array && action)
	{
		x = 0;
		while (x < size)
		{
			action(array[x]);
			x++;
		}
	}
}
