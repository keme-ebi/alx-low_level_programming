#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to head node
 * Return: head node's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;

	if (*head == NULL)
		return (0);
	*head = (*head)->next;
	return (temp->n);
	free(temp);
}
