#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: is a pointer to the root node of the tree to check
 *
 * Return: NULL If node is NULL or the parent is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp_parent = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left && node->parent->right)
	{
		temp_parent = node->parent;

		if (temp_parent->left == node)
			return (temp_parent->right);

		if (temp_parent->right == node)
			return (temp_parent->left);
	}

	return (NULL);
}
