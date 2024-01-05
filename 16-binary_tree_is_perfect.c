#include "binary_trees.h"

/**
 * root_height - function measures the height of a binary tree plus root
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: returns Height of tree or NULL when failed
 */

size_t root_height(const binary_tree_t *tree)
{
	size_t left_tree_height, right_tree_height, root = 1;

	if (!tree)
		return (0);

	left_tree_height = root_height(tree->left);
	right_tree_height = root_height(tree->right);

	if (left_tree_height > right_tree_height)
		return (left_tree_height + root);
	else
		return (right_tree_height + root);

}

/**
 * binary_tree_height - measures the height of a binary tree without root
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: returns Height of tree or NULL when failed
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (root_height(tree) - 1);
}

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

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size, max_possible_nodes;

	if (!tree)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	/* Calculate the maximum possible nodes for a perfect tree of given height */

	max_possible_nodes = (1 << height) - 1;

	return (size == max_possible_nodes);
}
