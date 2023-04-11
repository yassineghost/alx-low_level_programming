#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 *
 * @width: width
 * @height: height
 *
 * Return: pointer to 2 din. array
 */
int **alloc_grid(int width, int height)
{
	int c, j;
	int **tik;

	if (width <= 0 || height <= 0)
		return (NULL);
	tik = malloc(height * sizeof(int *));
	if (!tik)
		return (NULL);
	for (c = 0; c < height; c++)
	{
		tik[c] = malloc(width * sizeof(int));
		if (!tik[c])
		{
			while (c-- >= 0)
				free(tik[c]);
			free(tik);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			tik[c][j] = 0;
	}
	return (tik);
}
