#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: letter to be checked
 * Return: 1 if c is a letter,both lower and uppercase, return 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
