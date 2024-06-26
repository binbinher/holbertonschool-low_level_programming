#include "main.h"
/**
 * _strcpy - copies the string pointed to by src, 
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: a buffer to copy the string to
 * @src: the source string to copy
 * Return: *dest, a pointer to the string dest
 */
char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
