#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: the array to be searched
 * @size: the number of elements in the array
 * @cmp:a pointer to the function to be used to compare values
 * Return:index of the first element where cmp return 0
 * or -1 if no element matches or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
