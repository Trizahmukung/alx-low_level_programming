#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free a 2d integer previously created by alloc_grid
 * @grid: Pointer to array of ints.
 * @height: number of rows.
 * Return: nothing, frees memory
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i];
	free(grid);
}	
