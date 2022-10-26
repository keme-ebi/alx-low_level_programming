#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: head pointer
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *temp1;

	if (*head != NULL)
	{
		temp = *head;
		temp1 = (*head)->next;
		*head = (*head)->next;

		temp->next = NULL;

		while (*head != NULL)
		{
			*head = (*head)->next;
			temp1->next = temp;

			temp = temp1;
			temp1 = *head;
		}
		*head = temp;
	}
	return (*head);
}
