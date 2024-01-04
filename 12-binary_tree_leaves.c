#include "binary_trees.h"

/**
 * leaves_count - function counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves
 * Return: returns the number of leaves in a tree or NULL if failed
 */

size_t leaves_count(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (leaves_count(tree->left) + leaves_count(tree->right));
}

/**
 * binary_tree_leaves - function counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves
 * Return: returns the number of leaves in a tree or NULL if failed
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (leaves_count(tree));
}
