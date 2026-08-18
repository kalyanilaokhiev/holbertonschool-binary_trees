#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_depth - measure depth of node in binary tree
 * @tree: pointer to root node of tree to measure height
 *
 * Return: depth of node, 0 otherwise
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth;

	depth = 0;

	if (tree == NULL)
		return (0);

	/* no parents above */
	if (tree->parent == NULL)
		return (0);

	if (tree->parent != NULL)
	{
		/* recursion going up seeing the parents until theres none */
		depth = binary_tree_depth(tree->parent);
		depth++;
	}

	return (depth);
}
