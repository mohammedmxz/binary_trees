#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node with a given parent and value.
 * @parent: A pointer to the parent node.
 * @value: The value to be stored in the new node.
 *
 * Return: A pointer to the newly created node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *node;

    node = malloc(sizeof(binary_tree_t));
    if (node == NULL)
        return (NULL);

    node->n = value;
    node->parent = parent;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

