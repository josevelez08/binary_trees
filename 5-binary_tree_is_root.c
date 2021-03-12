#include "binary_trees.h"
/**
 * binary_tree_is_root -  checks if a given node is a root
 * @node: pointer to the root node of the tree to check
 * Return: 1 if node is root, otherway 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->parent == NULL)
		return (1);
	else
		return (0);
}
