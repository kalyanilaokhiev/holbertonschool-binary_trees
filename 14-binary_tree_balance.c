#include "binary_trees.h"
#include <stdlib.h>

/**
 * get_height - helper func measure height of binary tree
 * @tree: pointer to root node
 *
 * Return: height of tree, or 0 otherwise
 */

int get_height(const binary_tree_t *tree)
{
	int height_l;
	int height_r;

	height_l = 0;
	height_r = 0;

	if (tree == NULL)
		return (0);

	/* recursion to find height og left and right */
	height_l = get_height(tree->left);
	height_r = get_height(tree->right);

	/* take taller path, add 1 for current node layer */
	if (height_l > height_r)
		return (height_l + 1);
	else
		return (height_r + 1);
}

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

	/* call helper func */
	if (tree->left != NULL)
	{
		l = get_height(tree->left);
	}

	if (tree->right != NULL)
	{
		r = get_height(tree->right);
	}

	/* + means left is deeper, - means right is deeper */
	total = l - r;

	return (total);
}
