#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * of a listint_t list
 * @head: a pointeer to the address of the
 * head of the listint_t list
 * @n: the integer for the new node to contain
 *
 * Return: if the function fails - NULL.
 * otherwise - the address of the new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_el;

	new_el = malloc(sizeof(listint_t));
	if (new_el == NULL)
		return (NULL);

	new_el->n = n;
	new_el->next = *head;

	*head = new_el;

	return (new_el);
}
