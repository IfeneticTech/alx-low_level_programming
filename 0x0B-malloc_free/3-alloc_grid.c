#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **mee;
	int g, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (g = 0; g < height; g++)
	{
		mee[g] = malloc(sizeof(int) * width);

		if (mee[g] == NULL)
		{
			for (; g >= 0; g--)
				free(mee[g]);

			free(mee);
			return (NULL);
		}
	}

	for (g = 0; g < height; g++)
	{
		for (h = 0; h < width; h++)
			mee[g][h] = 0;
	}

	return (mee);
}
