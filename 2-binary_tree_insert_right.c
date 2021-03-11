#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 * @parent: is a pointer to the node to insert the right-child in.
 * @value: is the value to store in the new node.
 * Return: New node created.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_ref = NULL;

    if (!parent)
        return (NULL);

    new_ref = binary_tree_node(parent, value);
    if (!new_ref)
        return (NULL);
    
    if (parent->right)
    {
        parent->right->parent = new_ref;
        new_ref->right = parent->right;
    }

    parent->right = new_ref;
    return (new_ref);
}