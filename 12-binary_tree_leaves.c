#include "binary_trees.h"

/**
 * binary_tree_leaves - function counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves
 * Return: returns the number of leaves in a tree or NULL if failed
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t height, size;
	
	if (!tree)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	return (height - size);
}
