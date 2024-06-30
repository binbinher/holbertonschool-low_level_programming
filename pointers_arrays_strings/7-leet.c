#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: the string will be encoded.
 * Return: return to encoded string
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * can use if only, two loops only, swithc is not allowed
 */
char *leet(char *str)
{
	char *r = str;
	char a[] = {'a', 'e', 'o', 't', 'l'};
	char n[] = {4, 3, 0, 7, 1};
	int i = 0;

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == a[i] || *str == a[i] - 32)
				*str = n[i] + '0';
		}
		str++;
	}
	return (r);
}
