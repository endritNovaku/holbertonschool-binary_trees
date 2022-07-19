#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binry tree
 * @three: pointer to the root node
 * Return: the size of the binary tree or 0 on fail
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizeL = 0;
	size_t sizeR = 0;

	if (tree)
	{
		sizeL = binary_tree_size(tree->left);
		sizeR = binary_tree_size(tree->right);
		sizeL++;
	}

	return (sizeL + sizeR);
}
