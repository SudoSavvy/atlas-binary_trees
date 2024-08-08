#include <stdio.h>
#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root = binary_tree_node(NULL, 1);
    binary_tree_t *node2 = binary_tree_node(root, 2);
    binary_tree_t *node3 = binary_tree_node(root, 3);
    root->left = node2;
    root->right = node3;
    binary_tree_t *node4 = binary_tree_node(node2, 4);
    binary_tree_t *node5 = binary_tree_node(node2, 5);
    node2->left = node4;
    node2->right = node5;

    printf("Depth of node 4: %lu\n", binary_tree_depth(node4));
    printf("Depth of node 5: %lu\n", binary_tree_depth(node5));
    printf("Depth of node 3: %lu\n", binary_tree_depth(node3));
    printf("Depth of root: %lu\n", binary_tree_depth(root));

    binary_tree_delete(root);
    return (0);
}
