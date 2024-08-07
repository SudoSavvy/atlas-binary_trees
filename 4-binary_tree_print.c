#include "binary_trees.h"
#include <stdio.h>

/**
 * print_t - Prints the binary tree
 * @tree: Pointer to the root node of the tree to print
 */
void print_t(const binary_tree_t *tree)
{
    if (tree)
    {
        printf("Value: %d\n", tree->n);
        if (tree->left)
            printf("Left child: %d\n", tree->left->n);
        if (tree->right)
            printf("Right child: %d\n", tree->right->n);
        print_t(tree->left);
        print_t(tree->right);
    }
}
