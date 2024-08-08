#include "binary_trees.h"

/**
* binary_tree_sibling - finds the sibling of a node
* @node: pointer to the node to find the sibling
*
* Return: a pointer to the sibling node, or NULL if node is NULL,
*         the parent is NULL, or the node has no sibling
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    binary_tree_t *parent;

    /* Check if the node or its parent is NULL */
    if (node == NULL || node->parent == NULL)
        return (NULL);

    /* Get the parent node */
    parent = node->parent;

    /* If node is the left child, return the right child of the parent */
    if (parent->left == node)
        return (parent->right);

    /* If node is the right child, return the left child of the parent */
    if (parent->right == node)
        return (parent->left);

    /* Node has no sibling */
    return (NULL);
}
