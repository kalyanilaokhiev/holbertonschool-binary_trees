#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to node to insert left child in
 * @value: value to store in new node
 *
 * Return: pointer to created node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	if (parent->left != NULL)
	{
		/* make existing left, left of new node */
		node->left = parent->left;
		/* update left's parent to be parent of new node */
		parent->left->parent = node;
	}

	/* new node is now left */
	parent->left = node;
	node->n = value;

	return (node);
}
