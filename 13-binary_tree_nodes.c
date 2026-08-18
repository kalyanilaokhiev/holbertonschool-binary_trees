#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_nodes - counts nodes with at least 1 child in binary tree
 * @tree: pointer to root node of tree to measure height
 *
 * Return: total or 0 if no children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int l;
	int r;
	int total;

	l = 0;
	r = 0;
	total = 0;

	if (tree == NULL)
		return (0);

	/* if no children */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (tree->left != NULL)
	{
		l = binary_tree_nodes(tree->left);
	}

	if (tree->right != NULL)
	{
		r = binary_tree_nodes(tree->right);
	}

	/* total + current node */
	total = l + r + 1;

	return (total);
}
