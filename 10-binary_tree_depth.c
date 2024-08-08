#include "binary_trees.h"

/**
* binary_tree_depth - measures the depth of a node in a binary tree
* @tree: pointer to the node to measure the depth
*
* Return: the depth of the node. If tree is NULL, return 0.
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;

if (tree == NULL)
return (0);

/*
* Traverse up the tree from the node to the root, counting the
* number of edges
*/
while (tree->parent != NULL)
{
depth++;
tree = tree->parent;
}

return (depth);
}
