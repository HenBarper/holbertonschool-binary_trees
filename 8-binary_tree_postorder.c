#include "binary_trees.h"

/**
 * binary_tree_postorder - go through using post-order traversal
 * @tree: the binary tree
 * @func: ptr to a function
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}