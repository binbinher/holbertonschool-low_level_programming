#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character "\"" should be printed
 * the diagonal should end with a \n
 * if n is 0 or less, the function should only print a \n.
 * _putchar only
 */
void print_diagonal(int n)
{
	int row, column;

	if (n > 0)
	{
		for (row = 0; row < n; row++)
		{
			for (column = 0; column < row; column++)
				_putchar(' ');

			_putchar('\\');

			if (row == (n - 1))
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
