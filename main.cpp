#include <iostream>
#include <string>

struct BinaryTreeNode {
    string data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;

    BinaryTreeNode(const string& value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

void inorder(BinaryTreeNode* root) {
    if (root == nullptr){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preOrder(BinaryTreeNode* root) {
    if (root == nullptr){
        return;
    }
    cout << root->data << " ";
    inorder(root->left);
    inorder(root->right);
}


