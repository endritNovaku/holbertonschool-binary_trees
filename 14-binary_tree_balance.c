#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_balanc - measure the balanc factor of a binary tree
 * @tree: binary tree
 * Return: the balanc of the tree or 0 on NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int num1 = 0;
	int num2 = 0;
	int total;
	
	if (tree != NULL)
	{
		num1 = binary_tree_balance(tree->left);
		num1++;
		num2 = binary_tree_balance(tree->right);
	}
	total = num1 - num2;
	return (total - 1);
}
