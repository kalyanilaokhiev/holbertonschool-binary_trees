#include "binary_trees.h"
#include <stdlib.h>

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

	/* check if node has children and are all full */
	if (tree->left != NULL && tree->right != NULL)
	{
		l = binary_tree_is_full(tree->left);
		r = binary_tree_is_full(tree->right);

		return (l && r);
	}

	/* anything else */
	return (0);
}
