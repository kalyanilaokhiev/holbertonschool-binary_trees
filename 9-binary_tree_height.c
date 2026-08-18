#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height - measure height of binary tree
 * @tree: pointer to root node of tree to measure height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int l;
	int r;

	l = 0;
	r = 0;

	if (tree == NULL)
		return (0);

	/* if node is leaf, 0 bc doesnt add to height */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (tree->left != NULL)
	{
		/* recursion through left and add 1 each layer */
		l = binary_tree_height(tree->left);
		l++;
	}

	if (tree->right != NULL)
	{
		r = binary_tree_height(tree->right);
		r++;
	}

	/* return side with most layers */
	if (l > r)
		return (l);
	else
		return (r);
}
