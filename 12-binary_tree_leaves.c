#include "binary_trees.h"

/**
 * binary_tree_leaves - count the leaves of a binary tree
 * @tree: the binary tree
 * Return: size of tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		i++;

	if (tree->right)
		i++;

	return (i);
}
