#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: head pointer
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h->next != NULL)
	{
		h = h->next;
		ount++;
	}
	return (count);
}
