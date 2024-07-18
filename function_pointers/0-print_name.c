#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @name: name to print
 * @f:a pointer to function to use
 * Return: the function or otherwise nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		f(name);
}
