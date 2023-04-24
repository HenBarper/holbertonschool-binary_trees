#include "binary_trees.h"

/**
 * binary_tree_depth - find depth of a node
 * @tree: the binary tree
 * Return: size-t depth of node
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t i = 1;

	if (tree == NULL)
		return (0);

	i += binary_tree_size(tree->left);
	i += binary_tree_size(tree->right);

	return (i);
}
