#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: The character to be chekced
 * return: 1 if c is lowercase
 * retrun: 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
