#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as left child of parent
 * @parent: ptr to the parent node of node inserted
 * @value: value of n in new node
 * Return: ptr to the created node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);

	/*node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);*/

	node = binary_tree_node(parent, value);
	if (node = NULL)
		return (NULL);

	/*node->n = value;*/
	/*node->parent = parent;*/
	/*node->right = NULL;*/

	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left = node;
		(node->left)->parent = node;
	}
	else
	{
		parent->left = node;
		node->left = NULL;
	}
	return (node);
}
