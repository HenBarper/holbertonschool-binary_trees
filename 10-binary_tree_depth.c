#include "binary_trees.h"

/**
 * binary_tree_depth - find depth of a node
 * @tree: the binary tree
 * Return: size-t depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		i++;
		tree = tree->parent;
	}
	return (i);
}
