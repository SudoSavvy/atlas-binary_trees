#include "binary_trees.h"
#include <stdlib.h> /* Include this for free() */

/**
* binary_tree_delete - Deletes an entire binary tree
* @tree: Pointer to the root node of the tree to delete
*
* Return: void
*/
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
return;

/* Recursively delete left and right children */
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);

/* Free the current node */
free(tree);
}
