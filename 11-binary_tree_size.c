#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to root node of tree to measure height
 *
 * Return: total num of nodes
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int l;
	int r;
	int total;

	l = 0;
	r = 0;
	total = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		/* recursion through left and add 1 each layer */
		l = binary_tree_size(tree->left);
	}

	if (tree->right != NULL)
	{
		r = binary_tree_size(tree->right);
	}

	/* add the nodes up + 1 for the current node */
	total = l + r + 1;

	return (total);
}
