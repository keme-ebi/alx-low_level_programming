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
	listint_t *temp = (listint_t *)malloc(sizeof(listint_t));
	listint_t *temp1;
	unsigned int i = 0;

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
	}

	temp1 = *head;

	if (temp1 == NULL)
		*head = temp;

	for (; i < idx - 1; i++)
		temp1 = temp1->next;
	temp->next = temp1->next;
	temp1->next = temp;

	return (*head);
}
