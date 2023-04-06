#include "lists.h"

/**
 * insert_dnodeint_at_index - add a new node at the
 *	nth position of a dlistint_t list
 * @h: pointer to head node
 * @idx: index to store data
 * @n: data to be stored
 * Return: address of new element, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *temp = *h;
	unsigned int nth = 0;

	if (idx == 0 || temp->next == NULL)
		new = add_dnodeint(h, n);

	if (temp == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	if (temp->prev != NULL)
		temp = temp->prev;

	while (nth < idx - 1 && temp != NULL)
	{
		temp = temp->next;
		nth++;
	}

	new->n = n;
	new->next = temp->next;
	new->prev = temp;
	temp->next = new;

	return (new);
}
