#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of another
 *                            in a binary tree.
 * @parent: Pointer to the node to insert the right child in.
 * @value: Value to store in the new node.
 *
 * Return: Pointer to the newly inserted node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *node;

    if (parent == NULL)
        return (NULL);

    node = binary_tree_node(parent, value);
    if (node == NULL)
        return (NULL);

    if (parent->right != NULL)
    {
        node->right = parent->right;
        parent->right->parent = node;
    }
    parent->right = node;

    return (node);
}

