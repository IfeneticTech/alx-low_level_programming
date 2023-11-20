#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: a pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tempp;
	int numb;

	if (!head || !*head)
		return (0);

	numb = (*head)->n;
	tempp = (*head)->next;
	free(*head);
	*head = tempp;

	return (numb);
}
