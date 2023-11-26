#include <stdio.h>
#include <stdlib.h>

struct BSTNode {
    int data;
    struct BSTNode* left;
    struct BSTNode* right;
};

struct BSTNode* createNode(int newData) {
    struct BSTNode* newNode = (struct BSTNode*)malloc(sizeof(struct BSTNode));
    newNode->data = newData;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct BSTNode* insert(struct BSTNode* root, int newData) {
    if (root == NULL) {
        return createNode(newData);
    }

    if (newData < root->data) {
        root->left = insert(root->left, newData);
    } else if (newData > root->data) {
        root->right = insert(root->right, newData);
    }

    return root;
}

void inorderTraversal(struct BSTNode* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

int main() {
    struct BSTNode* root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    printf("Inorder traversal of BST: ");
    inorderTraversal(root);

    return 0;
}
