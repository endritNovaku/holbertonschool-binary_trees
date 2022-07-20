#include "binary_trees.h"
/**
 * binary_tree_postorder - goes though a binary tree post_order
 * @tree: binary tree
 * @func: funtion to call for each node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return (NULL);

	if (tree != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		(*func)(tree->n);
	}
}
