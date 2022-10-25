#include "lists.h"

/**
 * sum_listint - returns sum of all the data in a linked list
 * @head: pointer to head node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
