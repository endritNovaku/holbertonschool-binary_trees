#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert node as the left child of another node
 * @parent: parent node
 * @value: value of the new node
 * Return: a pointer to the new node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmpNode;

	if (parent == NULL)
		return (NULL);

	tmpNode = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		tmpNode->right = parent->right;
		parent->right->parent = tmpNode;
	}
	parent->right = tmpNode;
	return (tmpNode);
}
