#include "main.h"
/**
 * _memcpy - copies memory area.
 * @src: memory area to be copied
 * @dest: destinated memory area place
 * @n:number of byte to copy
 * Return: pointer to copied bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *r = dest;
	while (n)
	{
		*dest++ = *src++;
		n--;
	}
	return (r);
}
