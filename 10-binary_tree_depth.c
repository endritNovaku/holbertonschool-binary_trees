#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: null or the dept of the binary tree;
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
	{
		return (0);
	}

	while (tree->parent != NULL)
	{
		size++;
		tree = tree->parent;
	}

	return (size);
}
