#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in a dlistint_t list
 * @head: pointer to head node
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
