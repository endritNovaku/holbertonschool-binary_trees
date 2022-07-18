#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert node as the left child of another node
 * @parent: parent node
 * @value: value of the new node
 * Return: a pointer to the new node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmpNode = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	tmpNode->n = value;
	tmpNode->parent = parent;
	tmpNode->left = NULL;
	tmpNode->right = NULL;

	if (parent == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		tmpNode->right = parent->right;
		parent->right->parent = tmpNode;
	}
	parent->right = tmpNode;
	return (tmpNode);
}