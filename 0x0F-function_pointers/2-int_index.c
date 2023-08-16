#include "function_pointers.h"

/**
 * int_index - returns the index place if comparison = 0 , else -1
 * @array: the array of function
 * @size: the size of elements array
 * @cmp: the pointer to function
 * Return:  void (0)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (x < size)
			{
				if (cmp(array[x]))
					return (x);

				x++;
			}
		}
	}

	return (-1);
}
