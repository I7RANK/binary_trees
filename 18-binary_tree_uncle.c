#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: is a pointer to the node to find the uncle
 *
 * Return: NULL If node is NULL or if not has uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *temp_parent = NULL, *grandpa = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	temp_parent = node->parent;

	if (temp_parent == NULL || temp_parent->parent == NULL)
		return (NULL);

	grandpa = temp_parent->parent;

	if (grandpa->left && grandpa->right)
	{
		if (grandpa->left == temp_parent)
			return (grandpa->right);

		if (grandpa->right == temp_parent)
			return (grandpa->left);
	}

	return (NULL);
}
