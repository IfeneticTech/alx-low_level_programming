#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int y;
	listint_t *newn;
	listint_t *tempp = *head;

	newn = malloc(sizeof(listint_t));
	if (!newn || !head)
		return (NULL);

	newn->n = n;
	newn->next = NULL;

	if (idx == 0)
	{
		newn->next = *head;
		*head = newn;
		return (newn);
	}

	for (y = 0; tempp && y < idx; y++)
	{
		if (y == idx - 1)
		{
			newn->next = tempp->next;
			tempp->next = newn;
			return (newn);
		}
		else
			tempp = tempp->next;
	}

	return (NULL);
}
