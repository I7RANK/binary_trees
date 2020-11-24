#include "binary_trees.h"

/**
 *leaf - checks if a node is a leaf
 *@node: Pointer to the node to check.
 *Return: 1 if node is a leaf but no 0.
 */

int leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return ((*node).left == NULL && (*node).right == NULL);

}

/**
 * leaves - Counts a leaf in a binary tree.
 * @tree: Pointer to the root node.
 * Return: Number of leavs.
 **/

size_t leaves(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);

	l = leaves((*tree).left);
	r = leaves((*tree).right);

	return (l + r + leaf(tree));

}

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: Pointer to the root node.
 * Return: Number of leaves.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (leaves(tree));

}
