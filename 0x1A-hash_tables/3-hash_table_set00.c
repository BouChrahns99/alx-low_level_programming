#include "hash_tables.h"

/**
 * set_pair - mallocs a key/value pair to the hash table.
 * @node: a pointer to the hash table array node.
 * @key: the key, a string that cannot be empty.
 * @value: the value associated with the key, can be an empty string.
 *
 * Return: 1 on success, 0 on error.
 */
int set_pair(hash_node_t **node, const char *key, const char *value)
{
	*node = malloc(sizeof(hash_node_t));
	if (*node == NULL)
		return (0);
	(*node)->key = malloc(strlen(key) + 1);
	if ((*node)->key == NULL)
		return (0);
