#include "binary_trees.h"

int count_nodes(const binary_tree_t *tree, int temp_is_perfect);

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: 1 if is full or 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int count_left = 0, count_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	count_left = count_nodes(tree->left, 0);
	count_right = count_nodes(tree->right, 0);

	if (count_left == count_right)
	{
		if (count_left % 2 != 0 && count_right % 2 != 0)
			return (1);
	}

	return (0);
}

/**
 * count_nodes - counts the nodes
 * @tree: is a pointer to the root node of the tree to measure the height
 * @temp_is_perfect: is the counter
 *
 * Return: the temp_is_perfect
 */
int count_nodes(const binary_tree_t *tree, int temp_is_perfect)
{
	if (tree != NULL)
	{
		temp_is_perfect++;
		temp_is_perfect = count_nodes(tree->left, temp_is_perfect);
		temp_is_perfect = count_nodes(tree->right, temp_is_perfect);
	}
	return (temp_is_perfect);
}
