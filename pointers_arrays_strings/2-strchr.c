#include "main.h"
/**
 * _strchr -locates a character in a string
 * @s:the string
 * @c:the character to be located
 * Return: a pointer to the first occurrence of the character c
 * NULL if it's not found.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
