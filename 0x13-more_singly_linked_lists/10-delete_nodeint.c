#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index
 * @head: pointer to head
 * @index: position to be deleted
 * Return: 1 if successful, else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *temp2;
	unsigned int i;

	if (head == NULL || (*head) == NULL)
		return (-1);

	if (index == 0)
	{
		if ((*head)->next)
			(*head) = (*head)->next;
		else
			(*head) = NULL;
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
		temp->next = temp->next->next;
	else
		temp->next = NULL;
	free(temp2);
	return (1);
}
