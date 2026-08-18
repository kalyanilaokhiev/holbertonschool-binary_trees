#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_inorder - goes through a binary tree using pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* recursion trhough left first */
	binary_tree_inorder(tree->left, func);

	/* run func on node */
	func(tree->n);

	/* recursion through right */
	binary_tree_inorder(tree->right, func);
}
