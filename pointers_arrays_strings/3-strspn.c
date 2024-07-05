#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string to be checked
 * @accept: the string to search containing the list of characters to match
 * Return:the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int found = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				found++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (found);
		}
		s++;
	}
	return (found);
}
