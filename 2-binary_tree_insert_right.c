/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the created node, or NULL on failure.
 */

#include "binary_trees.h"

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
