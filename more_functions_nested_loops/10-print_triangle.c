#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the size of the triangle
 * If size is 0 or less, the function should print only a new line
 * use the character # to print the triangle
 * _putchar only
 */
void print_triangle(int size)
{
	int row = 0, column, n = size -1;

	if (size > 0)
	{
		for (; row < size; row++)
		{
			for (column = 0; column < size; column ++)
			{
				if (column < row)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('/n');
		}
	}
	else	
		_putchar('\n');

}
