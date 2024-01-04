#include "binary_trees.h"

/**
 * binary_tree_size - function measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 * Return: return the size of the binary tree or NULL if failed
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size, root = 1;

	if (!tree)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	return (left_size + right_size + root);
}
