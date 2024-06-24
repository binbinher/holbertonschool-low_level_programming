#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * _putchar only
 * @n:the number of times the character "_" should be printed
 * The line should end with a \n
 * If n is 0 or less, the function should only print \n
 */
void print_line(int n)
{
	int count;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
			_putchar('_');
	}
	
	_putchar('\n');
}
