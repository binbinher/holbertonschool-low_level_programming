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
	int i, j;

	if (n > 0)
	{
		for (i = 1; i < n; i++)
			for (j = 1; j < i; j++)
			{
				if (j == i)
					_putchar('\\');
				_putchar('\n');
				else _putchar(' ');
			}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
