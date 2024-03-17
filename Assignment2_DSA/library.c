// bst.c

#include <stdlib.h>
#include "Header.h"

// Function to insert a character into the BST
struct TreeNode* insert(struct TreeNode* root, char data) {
    // If the tree is empty, create a new node
    if (root == NULL) {
        struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        newNode->data = data;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }

    // Otherwise, recursively insert into the appropriate subtree
    if (data < root->data) {
        root->left = insert(root->left, data);
    }
    else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    return root;
}

// Function to search for a character in the BST
struct TreeNode* search(struct TreeNode* root, char data) {
    // Base case: If the root is NULL or the data is found at the root
    if (root == NULL || root->data == data) {
        return root;
    }

    // Recursively search in the left or right subtree
    if (data < root->data) {
        return search(root->left, data);
    }
    return search(root->right, data);
}

// Function to count the number of nodes in the BST
int countNodes(struct TreeNode* root) {
    // Base case: If the root is NULL, return 0
    if (root == NULL) {
        return 0;
    }

    // Count nodes in the left and right subtrees, and add 1 for the root
    return 1 + countNodes(root->left) + countNodes(root->right);
}

// Function to determine the height of the BST
int max(int a, int b) {
    return (a > b) ? a : b;
}

int determineHeight(struct TreeNode* root) {
    // Base case: If the root is NULL, return -1
    if (root == NULL) {
        return -1;
    }

    // Recursively determine the height of the left and right subtrees
    return 1 + max(determineHeight(root->left), determineHeight(root->right));
}
