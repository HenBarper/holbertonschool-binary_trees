#include "binary_trees.h"

/**
 * binary_tree_node - create a binary tree node
 * @parent: ptr to the parent node of node created
 * @value: value of n in new node
 * Return: ptr to the created node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
