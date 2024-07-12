#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: the string to copy
 * Return: a pointer to the duplicated string
 * otherwise to NULL if str is NULL or there's insufficient memroy
 */
char *_strdup(char *str)
{
	int length = 0;
	int i;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}
	if (length > 0)
	{
		copy = malloc((length + 1) * sizeof(char));

		if (copy != NULL)
		{
			for (i = 0; i < length; i++)
			{
				copy[i] = str[i];
			}
			copy[length] = '\0';
			return (copy);
		}
	}
	else
	{
		copy = malloc(sizeof(char));
		if (copy != NULL)
		{
			copy[0] = '\0';
			return (copy);
		}
	}
	return (NULL);
}
