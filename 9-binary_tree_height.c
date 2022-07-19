#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the hight
 * Return: if tree is NULL return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
	{
		return (0);
	}
	while (tree != NULL)
	{
		if (tree->left != NULL)
		{
			tree = tree->left;
			size++;
		}
		else
		{
			tree = tree->right;
			size++;
		}
	}
	size = size - 1;
	return(size);
}
