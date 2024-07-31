#include <unistd.h>
#include "lists.h"

/**
 * _putchar -write the character c to stdout
 * @c: the character to be printed
 * Return: 1 if success, -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
