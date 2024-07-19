#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers -a function that prints numbers
 * @separator:he string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: Nothing.
 * If separator is NULL, don’t print it.
 * Print a new line at the end of the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(args, int));
		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
