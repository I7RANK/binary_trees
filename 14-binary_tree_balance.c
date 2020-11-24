#include "binary_trees.h"

size_t search_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: is a pointer to the root node of the tree to measure the balance.
 * Return: balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance;

	if (tree == NULL)
		return (0);

	balance = search_height((*tree).left) - search_height((*tree).right);

	return (balance);
}

/**
 *search_height - Support function binary_balance.
 *@tree: is a pointer to the root node of the tree
 *Return: The height of the tree if is NULL return 0.
 */

size_t search_height(const binary_tree_t *tree)
{
	int height_l, height_r;

	if (!tree)
		return (0);

	height_l = search_height(tree->left);
	height_r = search_height(tree->right);


		if (height_l > height_r)
		{
			return (height_l + 1);
		}
		else
			return (height_r + 1);
}
