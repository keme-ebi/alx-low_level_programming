#include "lists.h"

/**
 * listint_len - returns the number of elements in a list
 * @h: head pointer
 * Return: number of elements
 */
size_t listint_len(const list_t *h)
{
	int count;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
