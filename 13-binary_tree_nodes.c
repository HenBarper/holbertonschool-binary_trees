#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes with at least 1 child
 * @tree: the binary tree
 * Return: size of tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		i++;

	i += binary_tree_nodes(tree->left);
	i += binary_tree_nodes(tree->right);

	return (i);
}
