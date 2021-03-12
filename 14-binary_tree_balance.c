#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: pointer to the root node of the tree to measure the balance factor.
 * Return: Balance factor of the tree.
 */

int height(binary_tree_t *tree);

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (height(tree->left) - height(tree->right));
}

/**
 * max - Compute the maximum of two integers.
 * @size_l: Size of the left subtree.
 * @size_r: Size of the right subtree.
 * Return: Highest subtree.
 */

int max(size_t size_l, size_t size_r)
{
	return (size_l >= size_r ? size_l : size_r);
}

/**
 * height - Compute the "height" of a tree.
 * @tree: pointer to the root node of the tree to measure the size.
 * Return: Size of the tree.
 */

int height(binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + max(height(tree->left), height(tree->right)));
}
