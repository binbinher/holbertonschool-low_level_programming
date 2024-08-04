#include "lists.h"

/**
 * free_dlistint - function that frees a dobble linked list
 * @head: pointer to the head of list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
