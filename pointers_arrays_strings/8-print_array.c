#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @n: the number of elements of the array to be printed
 * @a: the array of integers
 * Numbers must be separated by comma, followed by a space
 * should be displayed in the same order as they are stored in the array
 * printf allowed
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index == n - 1)
			continue;
		printf(" ,");
	}
printf("\n");
}
