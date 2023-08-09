#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free the array
 * @grid: the grid
 * @height: height
 * Description: frees memory the grid
 * Return: 0
 *
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
