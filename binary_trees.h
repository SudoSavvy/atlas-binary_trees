#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h> /* For size_t */

/**
 * struct binary_tree_s - Binary tree node
 * @n: Value stored in the node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 *
 * Description: Binary tree node structure
 */
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

/* Function prototypes */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);

#endif /* BINARY_TREES_H */
