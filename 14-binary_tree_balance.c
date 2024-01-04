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
 * binary_tree_balance - function measures the balance factor of a tree
 * @tree: Pointer to the root node of the tree
 * Return: returns the balance factor or 0 if failed
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
