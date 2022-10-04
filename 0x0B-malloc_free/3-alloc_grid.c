#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to a 2-dimensional array
 * of integers with each element init to 0
 * @width: the width
 * @height: the height
 *
 * Return: if width == 0, height == 0 or function fails -
 * NULL, else a pointer to array of int
 */
int **alloc_grid(int width, int height)
{
	int **twoDi;
	int height_i, width_i;;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoDi = malloc(sizeof(int *) * height);

	if (twoDi == NULL)
		return (NULL);

	for (height_i  = 0; height_i < height; height_i++)
	{
		twoDi[height_i] = malloc(sizeof(int) * width);

		if (twoDi[height_i] == NULL)
		{
			for (; height_i >= 0; height_i++)
			{
				free(twoDi[height_i]);
			}

			free(twoDi);
			return (NULL);
		}
	}

	for (height_i = 0; height_i < height; height_i++)
	{
		for (width_i = 0; width_i < width; width_i++)
			twoDi[height_i][width_i] = 0;
	}

	return (twoDi);
}
