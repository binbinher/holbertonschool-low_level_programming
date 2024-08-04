#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of
 * a dobble linked list
 * @head: pointer to the head of list
 * @index: number of the node to return
 * Return: node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
