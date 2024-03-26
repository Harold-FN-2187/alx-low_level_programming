#include "hash_tables.h"

/**
 * hash_table_get - Retrieve value of key-value pair in a hash table
 * @ht: pointer to the hash table
 * @key: Key in key-value pair to be retrieved
 * Return: Value associated with key
 * Otherwise - NULL if key cannot be matched
*/




char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
