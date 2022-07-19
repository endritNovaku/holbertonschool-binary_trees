#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: binary tree
 * Return: the number of leaves or 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves1 = 0;
	size_t leaves2 = 0;
	size_t total;

	if (tree == NULL)
		return (0);

	if (tree)
	{
		leaves1 = binary_tree_leaves(tree->left);
		leaves2 = binary_tree_leaves(tree->right);
		if (tree->left == NULL && tree->right == NULL)
		{
			leaves1++;
		}
	}
	total = leaves1 + leaves2;

	return (total);
}
