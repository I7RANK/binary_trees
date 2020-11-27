#include "binary_trees.h"

/**
 * binary_tree_rotate_left -  Performs a left-rotation on a binary tree.
 * @tree: Pointer to the root.
 * Return: Pointer to the new root nod
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *node;

	if (tree == NULL || (*tree).right== NULL)
	{
		return (NULL);
	}
	node = (*tree).right;
	(*tree).right = (*node).left;
	if ((*node).left != NULL)
	{
		(*node).left->parent = tree;
	}
	(*node).left = tree;
	(*node).parent = (*tree).parent;
	(*tree).parent = node;
	return (node);
}
