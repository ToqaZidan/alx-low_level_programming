#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data (n)
 * of a doubly linked list
 *
 * @head: head of the list
 * Return: the sum of the data - or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int nSum;

	nSum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			nSum += head->n;
			head = head->next;
		}
	}

	return (nSum);
}
