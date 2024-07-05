#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to be checked
 * @accept:the string to be searched
 * Return: the pointer to the byte in s, or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}
	return ('\0');
}
