#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * if NULL is passed, treat it as an empty string.
 * Return: a pointer to a space contains the 2 string.
 * NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int size_s1 = 0;
	int size_s2 = 0;
	int i = 0;
	char *string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[size_s1] != '\0')
	{
		size_s1++;
	}
	while (s2[size_s2] != '\0')
	{
		size_s2++;
	}
	string = maclloc((size_s1 + size_s2 + 1) * sizeof(char));
	if (string != NULL)
	{
		for (i = 0; i < size_s1; i++)
		{
			string[i] = s1[i];
		}
		for (i = 0; i < size_s1 + size_s2; i++)
		{
			string[i] = s2[i - size_s1];
		}
		string[size_s1 + size_s2] = '\0';
		return (string);
	}
	else
	{
		return (NULL);
	}
}
