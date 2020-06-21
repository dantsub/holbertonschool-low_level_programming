#include "holberton.h"
/**
  * free_grid - 2 dimensional grid previously created by your alloc_grid
  * function.
  * @grid: grid.
  * @height: height.
  * Return: 2 dimensional grid.
  */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);
	free(grid);
}
