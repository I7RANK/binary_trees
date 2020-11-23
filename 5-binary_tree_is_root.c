#include "binary_trees.h"

/**
 *binary_tree_node - Checks if a given node is a root.
 *@pnode: pointer to the node to check.
 *Return: return 1 if node is a leaf, otherwise 0.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if ((*node).parent == NULL)
		return (1);

	return(0);
}
