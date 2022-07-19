#include "binary_trees.h"
/**
 * binary_tree_balanc - measure the balanc factor of a binary tree
 * @tree: binary tree
 * Return: the balanc of the tree or 0 on NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int measureL = 0;
	int measureR = 0;
	int total;

	if (tree)
	{
		measureL = binary_tree_balance(tree->left);
		measureL++;
		measureR = binary_tree_balance(tree->right);
	}
	total = measureL - measureR;
	total--;

	return (total);
}
