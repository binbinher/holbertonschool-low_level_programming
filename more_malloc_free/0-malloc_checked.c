#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b:number of bytes to allocate.
 * Return: to a pointer to the allocted memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr != NULL)
	{
		return ((void *)ptr);
	}
	exit(98);
}
