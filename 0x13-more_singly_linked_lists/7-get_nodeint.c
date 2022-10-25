#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head node pointer
 * @index: index of the node
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (temp);
}
