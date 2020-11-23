#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_insert_left - Inserts the lef-child node.
 *@parent: Pointer to parent node.
 *@value: Node's value.
 *Return: A pointer to the created node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	(*new_node).n = value;
	(*new_node).parent = parent;
	(*new_node).right = NULL;
	(*new_node).left = (*parent).left;

	if ((*parent).left)
		(*parent).left->parent = new_node;
	
	(*parent).left = new_node;

	return (new_node);
}