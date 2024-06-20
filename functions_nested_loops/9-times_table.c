#include "main.h"
/**
 * times_table - prints the 9times table
 * starting with 0
 * @n: number to be print
 * @multi: multiplier, the number to be multipied
 * @prod: result of number * multiplier
 */
void time_table(void)
{
	int n, multi, prod;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar('');

			prod = n * multi;

			if (prod <= 9)
				_putchar('');
			else
				_putchar((prod % 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
