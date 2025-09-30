#include <iostream>
#include <string>
#include <queue>
using namespace std;

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

void inOrder(BinaryTreeNode* root) {
    if (root == nullptr){
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preOrder(BinaryTreeNode* root) {
    if (root == nullptr){
        return;
    }
    cout << root->data << " ";
    inOrder(root->left);
    inOrder(root->right);
}
void postOrder(BinaryTreeNode* root) {
    if (root == nullptr){
        return;
    }
    inOrder(root->left);
    inOrder(root->right);
    cout << root->data << " ";

}
void levelOrder(BinaryTreeNode* root) {
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

int main(){
    BinaryTreeNode* root = new BinaryTreeNode("A");
    root->left = new BinaryTreeNode("B");
    root->right = new BinaryTreeNode("C");
    root->left->left = new BinaryTreeNode("D");
    root->left->right = new BinaryTreeNode("E");
    root->right->left = new BinaryTreeNode("F");

    cout << "In-order:   ";
    inOrder(root);
    cout << "\n";

    cout << "Pre-order:  ";
    preOrder(root);
    cout << "\n";

    cout << "Post-order: ";
    postOrder(root);
    cout << "\n";

    cout << "Level-order: ";
    levelOrder(root);
    cout << "\n";



    return 0;
}


