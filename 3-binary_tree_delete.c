#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: is a pointer to the root node of the tree to delete
 *
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *temp_root = NULL, *node_to_free = NULL;

	if (tree == NULL)
		return;

	temp_root = tree;
	while (tree)
	{
		if (temp_root->left)
			temp_root = temp_root->left;
		else if (temp_root->right)
			temp_root = temp_root->right;
		else
		{
			node_to_free = temp_root;
			temp_root = temp_root->parent;

			if (temp_root)
			{
				if (temp_root->left == node_to_free)
					temp_root->left = NULL;
				else if (temp_root->right == node_to_free)
					temp_root->right = NULL;
			}
			else
				tree = NULL;

			free(node_to_free);
		}
	}
}
