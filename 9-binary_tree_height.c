#include "binary_trees.h"

/**
 * root_height - function measures the height of a binary tree plus root
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: returns Height of tree or NULL when failed
 */

size_t root_height(const binary_tree_t *tree)
{
	size_t left_tree_height, right_tree_height;

	if (!tree)
		return (0);

	left_tree_height = binary_tree_height(tree->left);
	right_tree_height = binary_tree_height(tree->right);

	if (left_tree_height > right_tree_height)	
		return (left_tree_height + 1);
	else
		return (right_tree_height + 1);

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

	return(root_height(tree) - 1);
}
