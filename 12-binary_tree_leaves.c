#include "binary_trees.h"

/**
 * binary_tree_leaves - count the leaves of a binary tree
 * @tree: the binary tree
 * Return: size of tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t i = 1;

	if (tree == NULL)
		return (0);

	i += binary_tree_size(tree->left);
	i += binary_tree_size(tree->right);

	return (i - 1);
}
