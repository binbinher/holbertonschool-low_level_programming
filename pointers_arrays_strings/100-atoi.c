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
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
				 s[i] == '\v' || s[i] == '\f' || s[i] == '\r')
	{
		i++;
	}

	if (s[i] == '-' || s[i] == '++')
	{
		if (s[0] == '-')
		{
			sign = -1;
		}
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + s[i] - '0';
		i++;
	}
	return (sign * result);
}
