#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop 
 * @width: the input width
 * @height: the input height
 * Return: the pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **ala;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	ala = malloc(sizeof(int *) * height);

	if (ala == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		ala[a] = malloc(sizeof(int) * width);

		if (ala[a] == NULL)
		{
			for (; a >= 0; a--)
				free(ala[a]);

			free(ala);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			ala[a][b] = 0;
	}

	return (ala);
}
