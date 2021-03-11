#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left of another node
 * @parent:  pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return:  pointer to the created node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_ref = NULL;

	if (!parent)
		return (NULL);

	new_ref = binary_tree_node(parent, value);
	if (!new_ref)
		return (NULL);

	if (parent->left)
	{
		parent->left->parent = new_ref;
		new_ref->left = parent->left;
	}

	parent->left = new_ref;
	return (new_ref);
}
