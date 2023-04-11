#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid -free the grid
 *
 * @grid: grid of memories
 * @height: int
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int c = 0;

	for (; c <height; c++)
		free(grid[c]);
	free(grid);
}