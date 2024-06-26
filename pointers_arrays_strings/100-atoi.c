#include "main.h"
/**
 * _atoi -  convert a string to an integer
 * @s: the string to be converted
 * the number in the string can be  preceded by
 * an infinite number of characters
 * be careful with positive and negative sign before the number
 * Return: the converted int
 */
int _atoi(char *s)

{
	int i = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')

			i *= -1;

		else if (*s >= '0' && *s <= '9')

			num = num * 10 + (*s - '0');

		else if (num > 0)
			break;

	} while (*s++);
	return (num * i);
}
