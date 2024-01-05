#include "binary_trees.h"

/**
 * binary_tree_nodes - function counts node with atleast 1 child in a tree
 * @tree: Pointer to the root node of the tree to count
 * Return: the node of the tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left && tree->right)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	else
		return (0);
}

/**
 * binary_tree_is_full - function checks if a binary tree is full
 * @tree: Pointer to the root node of the tree
 * Return: returns 0 when tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t check = 0;

	if (!tree)
		return (0);

	check = binary_tree_nodes(tree);

	if (check == 2 || check == 0)
		return (0);

	return (1);
}
