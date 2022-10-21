#include "lists.h"

/**
 * len - returns length of a string
 * @s: string
 * Return: string length
 */
int len(const char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
		continue;
	return (l);
}

/**
 * add_node - adds new node at the beginning of the list
 * @head: pointer to head of list
 * @str: string
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = (list_t *)malloc(sizeof(list_t));
	temp->str = strdup(str);
	temp->len = len(str);
	temp->next = *head;
	*head = temp;

	return (*head);
}
