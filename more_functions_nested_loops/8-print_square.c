#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size: is the size of the square
 * _putchar only
 * if size is 0 or less, print ony a new line.
 * use the character # to print
 */
void print_square(int size)
{
	if (size > 0)
	{
		int row, column;

		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
