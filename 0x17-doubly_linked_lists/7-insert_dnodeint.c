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
	dlistint_t *temp;
	unsigned int nth;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
	}

	else
	{
		temp = *h;
		nth = 1;
		if (temp != NULL)
			while (temp->prev != NULL)
				temp = temp->prev;
		while (temp != NULL)
		{
			if (nth == idx)
			{
				if (temp->next == NULL)
				{
					new = add_dnodeint_end(h, n);
				}
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = temp->next;
						new->prev = temp;
						temp->next->prev = new;
						temp->next = new;
					}
				}
				break;
			}
			temp = temp->next;
			nth++;
		}
	}
	return (new);
}
