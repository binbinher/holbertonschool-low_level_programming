#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * Separators of words: space, tabulation, new line etc
 * @str: the string to be capitalized
 * Return: the capitalized string
 */
char *cap_string(char *str)
{
	int index = 0;

	if (str[index] >= 'a' && str[index] <= 'z')
	{
		str[index] -= 32;
	}
	while (str[++index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
		{
			index++;
		}

		if (str[index - 1] == ' ' ||
				str[index - 1] == '\t' ||
				str[index - 1] == '\n' ||
				str[index - 1] == ',' ||
				str[index - 1] == ';' ||
				str[index - 1] == '.' ||
				str[index - 1] == '!' ||
				str[index - 1] == '?' ||
				str[index - 1] == '"' ||
				str[index - 1] == '(' ||
				str[index - 1] == ')' ||
				str[index - 1] == '{' ||
				str[index - 1] == '}')
		{
			if (str[index] >= 'a' && str[index] <= 'z')
			{
				str[index] -= 32;
			}
		}
	}
	return (str);
