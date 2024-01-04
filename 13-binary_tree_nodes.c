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

	if (tree->left || tree->right)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	else
		return (0);
}
