#include "LabCycle3-4.h"
#include <queue>

TreeNode::TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}

BinaryTree::BinaryTree() : root(nullptr) {}

BinaryTree::~BinaryTree() {
    destroyTree(root);
}

void BinaryTree::destroyTree(TreeNode* node) {
    if (node) {
        destroyTree(node->left);
        destroyTree(node->right);
        delete node;
    }
}

void BinaryTree::insert(int val) {
    if (root == nullptr) {
        root = new TreeNode(val);
        return;
    }

    TreeNode* current = root;
    while (true) {
        if (val < current->data) {
            if (current->left) {
                current = current->left;
            } else {
                current->left = new TreeNode(val);
                return;
            }
        } else {
            if (current->right) {
                current = current->right;
            } else {
                current->right = new TreeNode(val);
                return;
            }
        }
    }
}

void BinaryTree::levelOrderTraversal() {
    if (root == nullptr) {
        return;
    }

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();

        cout << current->data << " ";

        if (current->left) {
            q.push(current->left);
        }
        if (current->right) {
            q.push(current->right);
        }
    }
}