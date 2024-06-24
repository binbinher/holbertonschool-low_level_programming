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
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
							_putchar('\');
						else if (j < i)
							_putchar(' ');
			}
			_purchar('\n');
		}
	}
}
