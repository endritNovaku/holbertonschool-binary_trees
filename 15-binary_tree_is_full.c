#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: binary tree
 * Return 1 if tree is full else 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if (tree)
	{
		binary_tree_is_full(tree->left);
		binary_tree_is_full(tree->right);
		if (tree->left == NULL && tree->right != NULL)
			return	(0);
		else if (tree->left != NULL && tree->right == NULL)
                        return  (0);
		printf("%i, ", tree->n);
	}

	return	(1);
}
