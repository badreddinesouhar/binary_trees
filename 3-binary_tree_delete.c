#include "binary_trees.h"

void binary_tree_delete(binary_tree_t *tree) {
    if (!tree) {
        return;
    }

    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);

    free(tree);
}

// int main(void)
// {
//     binary_tree_t *root;

//     root = binary_tree_node(NULL, 98);
//     root->left = binary_tree_node(root, 12);
//     root->right = binary_tree_node(root, 402);
//     binary_tree_insert_right(root->left, 54);
//     binary_tree_insert_right(root, 128);
//     binary_tree_print(root);
//     binary_tree_delete(root);
//     system("leaks a.out");
//     return (0);
// }
