#include "lists.h"
/**
 * list_len - length of the list
 * @h: pointer to the first node
 * Return: number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	int y;

	if (h == NULL)
	return (0);

	for (y = 1; h->next != NULL; y++)
		h = h->next;
	return (y);
}
