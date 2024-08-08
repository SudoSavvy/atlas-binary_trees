#include "binary_trees.h"

/**
* depth - measures the depth of a node in a binary tree
* @tree: pointer to the node to measure depth
*
* Return: the depth of the node
*/
static size_t depth(const binary_tree_t *tree)
{
size_t d = 0;

while (tree)
{
d++;
tree = tree->left;
}
return (d);
}

/**
* is_perfect_util - checks if a binary tree is perfect
* @tree: pointer to the root node of the tree to check
* @d: depth of the leftmost leaf node
* @level: current level of the node
*
* Return: 1 if the tree is perfect, 0 otherwise
*/
static int is_perfect_util(const binary_tree_t *tree, size_t d, size_t level)
{
if (tree == NULL)
return (1);

/* If the tree is a leaf node */
if (tree->left == NULL && tree->right == NULL)
return (d == level + 1);

/* If the tree has no children */
if (tree->left == NULL || tree->right == NULL)
return (0);

/* Check recursively for left and right subtrees */
return (is_perfect_util(tree->left, d, level + 1) &&
is_perfect_util(tree->right, d, level + 1));
}

/**
* binary_tree_is_perfect - checks if a binary tree is perfect
* @tree: pointer to the root node of the tree to check
*
* Return: 1 if the tree is perfect, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t d;

if (tree == NULL)
return (0);

d = depth(tree);

return (is_perfect_util(tree, d, 0));
}
