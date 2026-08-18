#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to node to insert left child in
 * @value: value to store in new node
 *
 * Return: pointer to created node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(*parent));

	if (node == NULL)
		return (NULL);

	node->parent = parent;

	node->left = NULL;
	node->right = NULL;

	if (parent->right != NULL)
	{
		/* make existing left, left of new node */
		node->right = parent->right;
		/* update left's parent to be parent of new node */
		parent->right->parent = node;
	}

	/* new node is now left */
	parent->right = node;
	node->n = value;

	return (node);
}
