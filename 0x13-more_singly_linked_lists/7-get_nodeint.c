#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to  return
 *
 * Return: pointer to the node we are looking for or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int y = 0;
	listint_t *tempp = head;

	while (tempp && y < index)
	{
		tempp = tempp->next;
		y++;
	}

	return (tempp ? tempp : NULL);
}
