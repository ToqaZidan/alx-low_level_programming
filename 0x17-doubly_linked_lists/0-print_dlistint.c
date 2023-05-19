#include "lists.h"

/**
 * print_dlistint - prints all elements of a list
 *
 * @h: head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodeCount;

	nodeCount = 0;

	if (h == NULL)
		return (nodeCount);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodeCount++;
		h = h->next;
	}

	return (nodeCount);
}
