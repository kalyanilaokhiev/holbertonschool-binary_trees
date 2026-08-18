#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to root node of tree to measure balance
 *
 * Return: total balance
 */

int binary_tree_balance(const binary_tree_t *tree)
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
		l = binary_tree_balance(tree->left);
		l++;
	}

	if (tree->right != NULL)
	{
		r = binary_tree_balance(tree->right);
		r++;
	}

	/* + means left is deeper, - means right is deeper */
	total = l - r;

	return (total);
}
