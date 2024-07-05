#include "main.h"
#include <stdio.h>
/**
 * _strstr -  locates a substring.
 * @haystack:the string needs to be checked
 * @needle: the string needs to be searched
 * Return:  a pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && compare(haystack, needle))
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
