#include "binary_trees.h"
/**
 * binary_tree_preorder - print a tree in preorder
 * @tree: pointer to the root node of the tree to traverse
 * @func: function to call when print a node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
