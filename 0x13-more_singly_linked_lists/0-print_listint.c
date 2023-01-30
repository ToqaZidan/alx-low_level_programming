#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Function that prints all elements of a list
 * @h: list that elements should be printed
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
