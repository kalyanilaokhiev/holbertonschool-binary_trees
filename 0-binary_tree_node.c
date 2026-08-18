#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - creates a binary tree node
 * @parent: parent node
 * @value: int value inside new node
 *
 * Return: new node or NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(*parent));

	if (node == NULL)
		return (NULL);

	node->parent = parent;

	node->left = NULL;
	node->right = NULL;

	node->n = value;

	return (node);
}
