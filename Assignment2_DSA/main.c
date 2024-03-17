// main.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Header.h"

// Function to generate a random lowercase character ('a' to 'z')
char generateRandomChar() {
    return 'a' + rand() % 26;
}

// Main function
int main() {
    struct TreeNode* root = NULL;
    srand(time(NULL));

    int numChars = rand() % 10 + 11;
    printf("Number of characters to insert: %d\n", numChars);

    printf("Characters inserted: ");
    for (int i = 0; i < numChars; i++) {
        char data = generateRandomChar();
        printf("%c ", data);
        root = insert(root, data);
    }
    printf("\n");

    int numNodes = countNodes(root);
    printf("Number of nodes in the tree: %d\n", numNodes);

    int treeHeight = determineHeight(root);
    printf("Tree height: %d\n", treeHeight);

    return 0;
}
