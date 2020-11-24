#include "binary_trees.h"

/**
 *depth - Measures the depth of a node in a binary tree.
 *@tree: Pointer to the node to measure the depth
 *Return: The depth of a node.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;
	
	if(!tree)
		return (0);
	
	while ((*tree).parent)
	{
		depth++;
		tree = (*tree).parent;
	}
	

	return (depth);

}
