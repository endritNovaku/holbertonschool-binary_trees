#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a binary tree
 * @tree: is a pointer to the root node
 * @func: pointer to a function to call for each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		(*func)(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
