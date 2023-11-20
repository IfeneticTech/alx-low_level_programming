#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: a pointer to the address of the
 * head of the listint_t list
 *
 * Description: sets the head to NULL.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmpp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmpp = (*head)->next;
		free(*head);
		*head = tmpp;
	}

	head = NULL;
}
