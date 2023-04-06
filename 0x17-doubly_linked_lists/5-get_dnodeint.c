#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a dlistint_t list
 * @head: pointer
 * @index: node index
 * Return: element at nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int nth = 0;

	if (head == NULL)
		return (NULL);

	while (temp != NULL)
	{
		if (nth == index)
			return (temp);
		temp = temp->next;
		nth++;
	}
	return (temp);
}
