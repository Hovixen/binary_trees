#include "binary_trees.h"

/**
 * tree_depth - measures the depth of a node in a binary tree
 * @tree: Pointer to the root node of the tree to measure the depth
 * Return: returns depth of tree or NULL when failed
 */
size_t tree_depth(const binary_tree_t *tree)
{
	size_t tmp = 0;

	if (!tree)
		return (0);

	tmp = tree_depth(tree->parent);

	return (tmp + 1);
}
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: Pointer to the root node of the tree to measure the depth
 * Return: returns depth of tree or NULL when failed
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (tree_depth(tree) - 1);
}
