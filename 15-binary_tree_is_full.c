#include "binary_trees.h"

int if_full(const binary_tree_t *tree, int temp_is_full);

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: 1 if is full or 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int is_full = 0;

	if (tree == NULL)
		return (0);

	is_full = if_full(tree, 0);

	if (is_full % 2 == 0)
		is_full = 0;
	else
		is_full = 1;

	return (is_full);
}

/**
 * if_full - counts the nodes
 * @tree: is a pointer to the root node of the tree to measure the height
 * @temp_is_full: is the counter
 *
 * Return: the temp_is_full
 */
int if_full(const binary_tree_t *tree, int temp_is_full)
{
	if (tree != NULL)
	{
		temp_is_full++;
		temp_is_full = if_full(tree->left, temp_is_full);
		temp_is_full = if_full(tree->right, temp_is_full);
	}
	return (temp_is_full);
}
