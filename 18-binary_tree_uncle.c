
#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *father;

	if (node == NULL || node->parent->parent == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	father = node->parent->parent;
	if (father->left == node->parent)
	{
		return (father->right);
	}
	return (father->left);
}
