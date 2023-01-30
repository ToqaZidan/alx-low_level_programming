#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: list checked
 *
 * Return: number of elements in a list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
