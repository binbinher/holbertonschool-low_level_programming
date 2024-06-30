#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * Separators of words: space, tabulation, new line etc
 * @str: the string to be capitalized
 * Return: the capitalized string
 */
char *cap_string(char *str)
{
	char *r = str;
	int i;
	char a[] = " \t\n,.!?\"(){}";
	int cap = 1;

	while (*str)
	{
		if (cap && *str >= 'a' && *str <= 'z')
			*str -= 32;
		cap = 0;
		for (i = 0; i < 12; i++)
		{
			if (*str == a[i])
				cap = 1;
		}
		str++;
	}
	return (r);
}
