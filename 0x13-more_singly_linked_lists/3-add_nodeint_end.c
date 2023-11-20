#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the
 * end of a listint_t list
 * @head: a pointer to the address of the
 * head of the listint_t list
 * @n: the integer for the new node to contain
 *
 * Return: if the function fails - NULL.
 * otherwise - the address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n, *last_el;

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;

	if (*head == NULL)
		*head = new_n;

	else
	{
		last_el = *head;
		while (last_el->next != NULL)
			last_el = last_el->next;
		last_el->next = new_n;
	}

	return (*head);
}
