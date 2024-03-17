#pragma once
// header.h



// Define the structure of a BST node
struct TreeNode {
    char data;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Function prototypes
struct TreeNode* insert(struct TreeNode* root, char data);
struct TreeNode* search(struct TreeNode* root, char data);
int countNodes(struct TreeNode* root);
int determineHeight(struct TreeNode* root);

