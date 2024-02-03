#include "hash_tables.h"

/**
 * hash_table_create - a function that creates
 * a hash table with a given size.
 *
 * @size: size of the hash table
 * Return: the created hash table, or NULL if function fails
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *thetable;
	hash_node_t **array;
	unsigned long int y;

	thetable = malloc(sizeof(hash_table_t));
	if (thetable == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (y = 0; y < size; y++)
		array[y] = NULL;

	thetable->array = array;
	thetable->size = size;

	return (thetable);
}
