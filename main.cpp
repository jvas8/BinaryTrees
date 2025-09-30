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
void preOrder(BinaryTreeNode* root) {
    if (root == nullptr){
        return;
    }
    cout << root->data << " ";
    inorder(root->left);
    inorder(root->right);
}
void postOrder(BinaryTreeNode* root) {
    if (root == nullptr){
        return;
    }
    inorder(root->left);
    inorder(root->right);
    cout << root->data << " ";

}
void levelorder(BinaryTreeNode* root) {
    if (root == nullptr) {
        return;
    }
    // Create a queue
    queue<BinaryTreeNode*> q;
    // Step 1: Enqueue root
    q.push(root);
    while (!q.empty()) {
     // Dequeue front node
        BinaryTreeNode* current = q.front();
        q.pop();
     // Process current node
        cout << current->data << " ";
      // Enqueue left child if it exists
        if (current->left) { q.push(current->left);}
      // Enqueue right child if it exists
        if (current->right) { q.push(current->right);}
    }
}


