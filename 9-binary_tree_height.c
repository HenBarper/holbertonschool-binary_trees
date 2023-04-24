#include "binary_trees.h"

/**
 * binary_tree_height - fidn height of binary tree
 * @tree: the binary tree
 * Return: size-t depth of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int leftHeight;
	int rightHeight;

	if (!tree || (!tree->left && !tree->right))
	{
		return (0);
	}
	else
	{
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
}
