#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if binary tree is perfect
 * @tree: the binary tree
 * Return: 1 if perfect, 0 if null or not perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leftHeight;
	int rightHeight;

	if (tree == NULL)
		return (0);

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	if ((leftHeight - rightHeight) == 0)
		return (1);
	else
		return (0);
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
