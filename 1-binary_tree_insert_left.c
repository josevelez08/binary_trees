#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent:  pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return:  pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent->left == NULL)
	{
	parent->left = malloc(sizeof(binary_tree_t));
	parent->left->parent = parent;
	parent = parent->left;
	parent->n = value;
	parent->left = NULL;
	parent->right = NULL;
	return (parent);
	}
	else
	{
	binary_tree_t *ref;

	ref = malloc(sizeof(binary_tree_t));
	ref->parent = parent;
	ref->right = NULL;
	ref->n = value
	parent->left->parent = ref;
	ref->left = parent->left;
	parent->left = ref;
	return (parent);
	}
}
