#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array
 * @width: The width of the array
 * @height: The height of the array
 * Return: If width <= 0, height <= 0, or NULL
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int high, wide;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (high = 0; high < height; high++)
	{
		arr[high] = malloc(sizeof(int) * width);

		if (arr[high] == NULL)
		{
			for (; high >= 0; high--)
				free(arr[high]);

			free(arr);
			return (NULL);
		}
	}

	for (high = 0; high < height; high++)
	{
		for (wide = 0; wide < width; wide++)
			arr[high][wide] = 0;
	}

	return (arr);
}
