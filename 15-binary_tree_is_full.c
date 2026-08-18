#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_full - check if binary tree is full
 * @tree: pointer to root node
 *
 * Return: 1 if full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int l;
	int r;

	l = 0;
	r = 0;

	if (tree == NULL)
		return (0);

	/* check if node is leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* check if node has 2 children */
	if (tree->left != NULL && tree->right != NULL)
	{
		/* check if both left and right are also full */
		l = binary_tree_is_full(tree->left);
		r = binary_tree_is_full(tree->right);

		/* return 1 only if both l and e are 1 */
		return (l && r);
	}

	/* anything else */
	return (0);
}
