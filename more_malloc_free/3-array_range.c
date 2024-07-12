#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: starting value of the range
 * @max: ending value of the range
 * Return: the pointer to the newly created array
 * or return to NULL if min>max or malloc fails
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;
	int numofvalue;
	int value = min;

	if (max >= min)
	{
		numofvalue = (max - min) + 1;
		ptr = malloc(numofvalue * sizeof(int));
		if (ptr != NULL)
		{
			for (i = 0; i < numofvalue; i++)
			{
				ptr[i] = value;
				value++;
			}
			return (ptr);
		}
	}
	return (NULL);
}
