#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head:first node int he list
 * @n: intger to be stored in the list
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp->next = temp;
		temp->next = new;
	}
	return (*head);
}
