#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int thecount;

	thecount = 0;

	if (h == NULL)
		return (thecount);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		thecount++;
		h = h->next;
	}

	return (thecount);
}
