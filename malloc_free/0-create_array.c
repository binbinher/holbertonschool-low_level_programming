#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size:size of the array
 * @c: the charactor to insert
 * Return: NULL if size is 0 or fails; otherwise a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size > 0)
	{
		array = malloc(size * sizeof(char));

		if (array != NULL)
		{
			for (i = 0; i < size; i++)
			{
				array[i] = c;
			}
			return (array);
		}
	}
	return (NULL);
}
