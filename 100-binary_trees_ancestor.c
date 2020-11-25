
#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 * Return: lowest common ancestor on success, NULL if there isn't one.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
							const binary_tree_t *second)
{
	const binary_tree_t *i;

	if (!first || !second)
		return (NULL);

	while (first)
	{
		for (i = second; i; i = (*i).parent)
		{
			if (first == i)
				return ((binary_tree_t *) i);

		}

		i = (binary_tree_t *)second;
		first = (*first).parent;
	}

	return (NULL);
}
