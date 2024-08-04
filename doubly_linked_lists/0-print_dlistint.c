#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of
 * a dlistin_t list
 * @h: list of int elements to print
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
