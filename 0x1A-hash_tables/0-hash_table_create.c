#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));
	unsigned int i;

	if (new_table)
	{
		new_table->size = size;
		new_table->array = calloc(size, sizeof(*new_table->array));

		for (i = 0; i < new_table->size; i++)
			new_table->array[i] = NULL;

		return (new_table);
	}
	free (new_table);

	return (NULL);
}
