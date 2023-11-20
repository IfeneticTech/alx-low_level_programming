#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *wolf, *horse;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	wolf = head->next;
	horse = (head->next)->next;

	while (horse)
	{
		if (wolf == horse)
		{
			wolf = head;
			while (wolf != horse)
			{
				nodes++;
				wolf = wolf->next;
				horse = horse->next;
			}

			wolf = wolf->next;
			while (wolf != horse)
			{
				nodes++;
				wolf = wolf->next;
			}

			return (nodes);
		}

		wolf = wolf->next;
		horse = (horse->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - prints a listint_t list safely
 * @head: a pointer to the head of  the listint_t list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, idx = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (idx = 0; idx < nodes; idx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
