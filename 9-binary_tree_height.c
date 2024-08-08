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

/* Recursively measure the height of the left and right subtrees */
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);

/* The height of the tree is the maximum height of its subtrees plus one */
return (left_height > right_height ? left_height : right_height) + 1;
}
