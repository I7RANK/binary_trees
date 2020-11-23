#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of a node
 * @parent: is a pointer to insert the right-child in
 * @value: is the value to the new node
 *
 * Return: a pointer to the new node or NULL if fails
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL, *temp = NULL;

	if (parent == NULL)
		return (NULL);

	temp = parent->right;

	new_node = binary_tree_node(parent, value);
	parent->right = new_node;

	if (temp)
		temp->parent = new_node;
	new_node->right = temp;

	return (new_node);
}
