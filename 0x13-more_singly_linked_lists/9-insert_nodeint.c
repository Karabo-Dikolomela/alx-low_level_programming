#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *x;
	listint_t *y;

	y = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && y != NULL; i++)
		{
			y = y->next;
		}
	}

	if (y == NULL && idx != 0)
		return (NULL);

	x = malloc(sizeof(listint_t));
	if (x == NULL)
		return (NULL);

	x->n = n;

	if (idx == 0)
	{
		x->x = *head;
		*head = x;
	}
	else
	{
		x->x = y->next;
		y->next = x;
	}

	return (x);
}
