#include "binary_trees.h"

/**
 * *binary_tree_node - function creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value of the new node
 * Return: returns pointer to the new node or Null when if failed
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
