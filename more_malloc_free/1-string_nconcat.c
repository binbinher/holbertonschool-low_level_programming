#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * @n: bytes
 * If n is greater or equal to the length of s2 then use the entire string s2
 * Return: pointer of newly allocated space in memory
 * or NULL if fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, j = 0, nbchars1 = 0, nbchars2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
		nbchars1 = 0;
	}
	while (s1[nbchars1] != '\0')
	{
		nbchars1++;
	}
	if (s2 == NULL)
	{
		s2 = "";
		nbchars2 = 0;
	}
	while (s2[nbchars2] != '\0')
	{
		nbchars2++;
	}
	if (nbchars2 >= n)
	{
		nbchars2 = n;
	}
	ptr = malloc((nbchars1 + nbchars2 + 1) * sizeof(char));
	if (ptr != NULL)
	{
		for (i = 0; i < nbchars1; i++)
		{
			ptr[i] = s1[i];
		}
		for (j = 0; j < nbchars2; j++)
		{
			ptr[i + j] = s2[j];
		}
		ptr[i + j] = '\0';
		return (ptr);
	}
	return (NULL);
}
