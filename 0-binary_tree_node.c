#include "binary_trees.h"
/**
 * binary_tree_node -  function that creates a binary tree node
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *ref;

	if (parent == NULL)
	{
		ref = malloc(sizeof(binary_tree_t));
		ref->n = value;
		ref->parent = NULL;
		ref->right = NULL;
		ref->left = NULL;
		return (ref);
	}
	else
	{
		ref = parent;
		parent = malloc(sizeof(binary_tree_t));
		parent->n = value;
		parent->parent = ref;
		parent->right = NULL;
		parent->left = NULL;
		return (parent);
	}
}
