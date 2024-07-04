#include "main.h"
/**
 * _strchr -locates a character in a string
 * @s:the string
 * @c:the character to be located
 * Return: a pointer to the first occurrence of the character c
 * Return: NULL if it's not found.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
