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
	int **tik, c, j;
	tik = malloc(sizeof(*tik) * height);

	if (width <= 0 || height <= 0 || tik == 0)
	{
		return (NULL);
	}
	else
	{
		for (c = 0; c < height; c++)
		{
			tik[c] = malloc(sizeof(**tik) * width);
			if (tik[c] == 0)
			{
				while (c--)
					free(tik[c]);
				free(tik);
				return (NULL);
			}
			for (j = 0; j < width; j++);
				tik[c][j] = 0;
		}
	}
	return (tik);
}
