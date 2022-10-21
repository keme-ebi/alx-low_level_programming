#include "lists.h"

/**
 * length - returns length of a string
 * @s: string
 * Return: string length
 */
int length(const char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		continue;
	return (len);
}

/**
 * add_node_end - adds new node at the end of the list
 * @head: pointer to node head
 * @str: string
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = (list_t *)malloc(sizeof(list_t));
	list_t *temp1;

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = length(str);
	temp->next = NULL;

	temp1 = *head;
	if (temp1 == NULL)
		*head = temp;
	else
	{
		while (temp1->next != NULL)
			temp1 = temp1->next;
		temp1->next = temp;
	}

	return (*head);
}
