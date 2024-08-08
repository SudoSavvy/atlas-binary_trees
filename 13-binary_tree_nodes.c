#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the number of nodes with at least one child
 * @tree: pointer to the root node of the tree to count the nodes
 *
 * Return: the number of nodes with at least one child. If tree is NULL, return 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    /* Check if the current node has at least one child */
    if (tree->left != NULL || tree->right != NULL)
        return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

    /* If the current node has no children, it does not count as a node with children */
    return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
