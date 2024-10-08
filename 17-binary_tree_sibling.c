#include "binary_trees.h"
/**
*binary_tree_sibling - finds the sibling of a node
*@node: pointer to the node to find the sibling
*
*Return: a pointer to the sibling node, or NULL if node is NULL,
*        the parent is NULL, or the node has no sibling
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
binary_tree_t *parent;
if (node == NULL || node->parent == NULL)
return (NULL);
parent = node->parent;
if (parent->left == node)
return (parent->right);
if (parent->right == node)
return (parent->left);
return (NULL);
}
