#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value) {
    if (parent == NULL) {
        return NULL;
    }

    binary_tree_t *right = binary_tree_node(parent, value);
    if (!right) {
        return NULL;
    }

    if (parent->right != NULL) {
        parent->right->parent = right;
        right->right = parent->right;
    }

    parent->right = right;

    return right;
}

// int main(void)
// {
//     binary_tree_t *root;

//     root = binary_tree_node(NULL, 98);
//     root->left = binary_tree_node(root, 12);
//     root->right = binary_tree_node(root, 402);
//     binary_tree_print(root);
//     printf("\n");
//     binary_tree_insert_right(root->left, 54);
//     binary_tree_insert_right(root, 128);
//     binary_tree_print(root);
//     return (0);
// }