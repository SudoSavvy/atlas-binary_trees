#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: a pointer to the uncle node, or NULL if node is NULL,
 *         the node's parent is NULL, or the parent has no sibling
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    binary_tree_t *parent, *grandparent;

    /* Check if the node is NULL */
    if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
        return (NULL);

    /* Get the parent and grandparent nodes */
    parent = node->parent;
    grandparent = parent->parent;

    /* The uncle is the sibling of the parent */
    return (parent == grandparent->left ? grandparent->right : grandparent->left);
}
