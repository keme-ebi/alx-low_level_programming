#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of a dlistint_t list
 * @head: pointer to head node
 * @n: data to be stored
 * Return: address of new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	new->n = n;
	new->prev = NULL;

	while ((*head)->prev != NULL)
		*head = (*head)->prev;

	(*head)->prev = new;
	new->next = *head;
	*head = new;
	return (new);
}
