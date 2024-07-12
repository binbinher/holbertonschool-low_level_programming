#include "main.h"
include<stdlib.h>
		/**
		 * _calloc - allocates memory for an array, using malloc.
		 * @nmemb: the number of elements to allocate
		 * @size: the size of each element.
		 * the memory is set to zero
		 * Return:the allocated memory, or NULL when size is 0 or malloc fails
		 */
		void *_calloc(unsigned int nmemb, unsigned int size);
{
	char *ptr;
	unsigned int i;

	if (nmemb != 0 && size != 0)
	{
		ptr = malloc(nmemb * size);
		if (ptr != null)
		{
			for (i = 0; i < (nmemb * size); i++)
			{
				ptr[i] = 0;
			}
			return (ptr);
		}
	}
	return (NULL);
}
