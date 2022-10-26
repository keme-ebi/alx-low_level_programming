#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: pointer to head node
 * @idx: given position
 * @n: value to be stored at idx position
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp1 = (listint_t *)malloc(sizeof(listint_t));
	listint_t *temp = *head;
	unsigned int i = 0;

	if (idx != 0)
	{
		for (; i < idx - 1 && temp != NULL; i++)
			temp = temp->next;
	}

	if (temp == NULL && idx != 0)
		return (NULL);

	if (temp1 == NULL)
		return (NULL);

	temp1->n = n;

	if (idx == 0)
	{
		temp1->next = *head;
		*head = temp1;
	}
	else
	{
		temp1->next = temp->next;
		temp->next = temp1;
	}

	return (temp1);
}
