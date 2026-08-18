#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to root node of tree to measure height
 *
 * Return: total leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int l;
	int r;
	int total;

	l = 0;
	r = 0;
	total = 0;

	if (tree == NULL)
		return (0);

	/* if node is leaf, 0 bc doesnt add to height */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL)
	{
		l = binary_tree_leaves(tree->left);
	}

	if (tree->right != NULL)
	{
		r = binary_tree_leaves(tree->right);
	}

	total = l + r;

	return (total);
}
