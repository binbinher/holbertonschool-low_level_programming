#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers.
 * @a:
 * @size:
 * Return: 0 if success
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = (size * size) - 1;
	int diagdown = 0;
	int diagup = 0;

	while (i < size * size)
	{
		diagdown = diagdown + a[i];
		i = i + (size + 1);
	}

	while (j > size - 1)
	{
		j = j - (size - 1);
		diagup = diagup + a[j];
	}

	printf("%i, %i\n", diagdown, diagup);
}
