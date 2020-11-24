#include "binary_trees.h"

int search_height(const binary_tree_t *tree, int height, int *temp_height);

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 *
 * Return: nothing
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int height = 0;

	if (tree == NULL)
		return (0);

	search_height(tree, 0, &height);

	return (height);
}

/**
 * search_height - search the height of a tree
 * @tree: is a pointer to the root node of the tree to measure the height
 * @temp_height: is the temporal height
 * @height: the real height
 *
 * Return: the temp_height
 */
int search_height(const binary_tree_t *tree, int temp_height, int *height)
{
	if (tree != NULL)
	{
		temp_height++;
		temp_height = search_height(tree->left, temp_height, height);
		temp_height = search_height(tree->right, temp_height, height);
		temp_height--;
		if (temp_height > *height)
			*height = temp_height;
	}
	return (temp_height);
}
