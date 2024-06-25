#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: the string that needs to be printed
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len = 0, index = 0;

	len = _strlen(s);

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}

/**
 * _strlen - returns the length of a string.
 * @s: an input string
 * Return: the lenth of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}