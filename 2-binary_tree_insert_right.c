#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node as right child of parent
 * @parent: ptr to the parent node of node inserted
 * @value: value of n in new node
 * Return: ptr to the created node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right = node;
		(node->right)->parent = node;
	}
	else
	{
		parent->right = node;
		node->right = NULL;
	}
	return (node);
}
