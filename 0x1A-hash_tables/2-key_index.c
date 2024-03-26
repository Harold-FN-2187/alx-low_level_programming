#include "hash_tables.h"

/**
 * key_index - Obtain index at whicj  key-value pair
 * should be stores in array of a hash table
 * @key: key to get index of
 * @size: size of array of hash table
 * Return: index of key in hash table
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
