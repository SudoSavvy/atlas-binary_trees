#include "binary_trees.h"

/**
* binary_tree_postorder - goes through a binary tree using post-order traversal
* @tree: pointer to the root node of the tree to traverse
* @func: pointer to a function to call for each node
*
* Description: This function visits each node in the following order:
*              1. Traverse the left subtree
*              2. Traverse the right subtree
*              3. Visit the root node
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;

/*Traverse the left subtree*/
binary_tree_postorder(tree->left, func);

/*Traverse the right subtree*/
binary_tree_postorder(tree->right, func);

/*Visit the root node*/
func(tree->n);
}
