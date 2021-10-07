#include "hash_tables.h"
/**
 * hash_table_create - a function that creates a hash table.
 * @size: hash_table size.
 * Return: hash_table_t
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	long unsigned int i;
	
	hash_table_t *new_table = NULL;
	if (size < 1)
		return (NULL);
	if ((new_table = calloc(1, sizeof(hash_table_t))) == NULL)
	{
		free(new_table);
		return (NULL);
	}
	if ((new_table -> array = calloc(1,sizeof(sigset_t*) * size)) == NULL)
	{
		free(new_table);
		return NULL;
	}
	for(i=0; i < size; i++)
		new_table -> array[i] = NULL;
	new_table -> size = size;
	return (new_table);

}
