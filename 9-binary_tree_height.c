#include "binary_trees.h"
#define max(a, b) (((a) > (b)) ? (a) : (b))

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: the height of a binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	else
	{
	int left_side = 0;
	int right_side = 0;

	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);
	if (left_side > right_side)
	{
		return (left_side + 1);
	}
	else
	{
		return (right_side + 1);
	}
	}
}
