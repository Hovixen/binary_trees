#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: Pointer to the root node of the tree to measure the depth
 * Return: returns depth of tree or NULL when failed
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t  *tmp;
	size_t i = 0;

	if (!tree)
		return (0);

	tmp = tree;
	while (tmp)
	{
		i++;
		tmp = (*tmp).parent;
	}

	return (i - 1);
}
