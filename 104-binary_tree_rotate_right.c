#include "binary_trees.h"

/**
 * binary_tree_rotate_right -  Performs a right-rotation on a binary tree.
 * @tree: Pointer to the root.
 * Return: Pointer to the new root nod
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *node;

	if (tree == NULL || (*tree).left == NULL)
	{
		return (NULL);
	}
	node = (*tree).left;
	(*tree).left = (*node).right;
	if ((*node).right != NULL)
	{
		(*node).right->parent = tree;
	}
	(*node).right = tree;
	(*node).parent = (*tree).parent;
	(*tree).parent = node;
	return (node);
}
