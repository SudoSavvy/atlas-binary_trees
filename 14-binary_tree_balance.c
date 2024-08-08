#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: the height of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height, right_height;

    if (tree == NULL)
        return (0);

    /* Recursively measure the height of the left subtree */
    left_height = binary_tree_height(tree->left);

    /* Recursively measure the height of the right subtree */
    right_height = binary_tree_height(tree->right);

    /* The height of the current tree is the maximum of the heights of the subtrees plus 1 for the current node */
    return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: the balance factor of the tree. If tree is NULL, return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    int left_height, right_height;

    if (tree == NULL)
        return (0);

    /* Measure the height of the left subtree */
    left_height = (int)binary_tree_height(tree->left);

    /* Measure the height of the right subtree */
    right_height = (int)binary_tree_height(tree->right);

    /* Return the balance factor */
    return (left_height - right_height);
}
