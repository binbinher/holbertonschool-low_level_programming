#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * list
 * @h:list of elements
 * Description: print all elements of a linked list.
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t numNode;
	const list_t *current_node = h;

	numNode = 0;

	while (current_node != NULL)
	{
		if (current_node->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", current_node->len, current_node->str);
		};
		current_node = current_node->next;
		numNode++;
	}
	return (numNode);
}
