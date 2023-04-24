#include "binary_trees.h"

/**
 * binary_tree_balance - measure the balance factor
 * @tree: the binary tree
 * Return: balance of tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int leftHeight;
	int rightHeight;

	if (tree == NULL)
		return (0);

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	return (leftHeight - rightHeight);
}

/**
 * binary_tree_height - fidn height of binary tree
 * @tree: the binary tree
 * Return: size-t depth of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight;
	size_t rightHeight;

	if (tree == NULL)
	{
		return (0);
	}

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	if (leftHeight > rightHeight)
	{
		return (leftHeight + 1);
	}
	else
	{
		return (rightHeight + 1);
	}
}
