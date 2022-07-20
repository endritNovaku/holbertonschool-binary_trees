#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the hight
 * Return: if tree is NULL return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t sizeL = 0;
	size_t sizeR = 0;
	const binary_tree_t *tmp = tree;

	if (tree == NULL)
	{
		return (0);
	}
	while (tmp != NULL)
	{
		if (tmp->left != NULL)
		{
			tmp = tmp->left;
			sizeL++;
		}
		else
		{
			tmp = tmp->right;
			sizeL++;
		}
	}
	while (tree != NULL)
	{
		if (tree->left != NULL)
		{
			tree = tree->left;
			sizeR++;
		}
		else
		{
			tree = tree->right;
			sizeR++;
		}
	}
	sizeL = sizeL - 1;
	sizeR = sizeR - 1;
	if (sizeL >= sizeR)
		return (sizeL);
	else
		return (sizeR);
}
