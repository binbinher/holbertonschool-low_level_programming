#include <stdlib.h>
#include "main.h"
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: number of rows
 * @height: number of columns
 * Return: to a pointer, or NULL on failure.
 * If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **array = 0;
	int i = 0;
	int j = 0;

	array = (int **)malloc(width * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		array[i] = (int *)malloc(height * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
		for (j = 0; j < height; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
