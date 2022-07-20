#include "binary_trees.h"

/**
 * binary_tree_nodes - count the nodes with at least 1 child
 * @tree: the binary tree
 * Return: the number of nodes or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node1 = 0;
	size_t node2 = 0;
	size_t total;

	if (tree == NULL)
		return (0);

	if (tree)
	{
		node1 = binary_tree_nodes(tree->left);
		node2 = binary_tree_nodes(tree->right);
		if (tree->left != NULL || tree->right != NULL)
			node1++;
	}

	total = node1 + node2;

	return (total);
}
