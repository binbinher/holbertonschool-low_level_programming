#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @name: name to print
 * @f:function to use
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	if (name != NULL || f != NULL)
	{
		f(name);
	}
}
