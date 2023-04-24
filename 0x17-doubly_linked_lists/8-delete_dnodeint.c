#include "lists.h"

/**
 * delete_dnode_at_index - deletes a node at the specified index of a list
 * @head: pointer to head node
 * @index: index to delete node from
 * Return: 1 if it succeeds, else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *temp2;

	if (head == NULL || (*head) == NULL)
		return (-1);

	if (index == 0)
	{
		if ((*head)->next == NULL)
			(*head) = NULL;
		else
			(*head) = temp->next;
		free(temp);
		return (1);
	}
	while (index != 1)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
		--index;
	}

	temp2 = temp->next;
	if (temp->next->next)
	{
		temp->next = temp->next->next;
		temp->next->prev = temp2->prev;
	}
	else
		temp->next = NULL;
	free(temp2);
	return (1);
}
