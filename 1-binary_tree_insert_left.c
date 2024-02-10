#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value) {
    if (parent == NULL) {
        return NULL;
    }

    binary_tree_t *left = binary_tree_node(parent, value);
    if (left == NULL) {
        return NULL;
    }

    if (parent->left != NULL) {
        parent->left->parent = left;
        left->left = parent->left;
    }

    parent->left = left;

    return left;
}

// int main(void)
// {
//     binary_tree_t *root;

//     root = binary_tree_node(NULL, 98);
//     root->left = binary_tree_node(root, 12);
//     root->right = binary_tree_node(root, 402);
//     binary_tree_print(root);
//     printf("\n");
//     binary_tree_insert_left(root->right, 128);
//     binary_tree_insert_left(root, 54);
//     binary_tree_print(root);
//     return (0);
// }