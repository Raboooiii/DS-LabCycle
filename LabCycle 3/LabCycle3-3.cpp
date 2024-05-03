#include "LabCycle3-3.h"

BinarySearchTree::BinarySearchTree() : root(nullptr) {}

BinarySearchTree::~BinarySearchTree() {
    destroyTree(root);
}

void BinarySearchTree::destroyTree(TreeNode* node) {
    if (node) {
        destroyTree(node->left);
        destroyTree(node->right);
        delete node;
    }
}

void BinarySearchTree::insert(int key) {
    root = insertNode(root, key);
}

TreeNode* BinarySearchTree::insertNode(TreeNode* node, int key) {
    if (node == nullptr) {
        return new TreeNode(key);
    }

    if (key < node->key) {
        node->left = insertNode(node->left, key);
    } else if (key > node->key) {
        node->right = insertNode(node->right, key);
    }

    return node;
}

void BinarySearchTree::remove(int key) {
    root = deleteNode(root, key);
}

TreeNode* BinarySearchTree::deleteNode(TreeNode* node, int key) {
    if (node == nullptr) {
        return nullptr;
    }

    if (key < node->key) {
        node->left = deleteNode(node->left, key);
    } else if (key > node->key) {
        node->right = deleteNode(node->right, key);
    } else {
        if (node->left == nullptr) {
            TreeNode* temp = node->right;
            delete node;
            return temp;
        } else if (node->right == nullptr) {
            TreeNode* temp = node->left;
            delete node;
            return temp;
        }

        TreeNode* temp = minValueNode(node->right);
        node->key = temp->key;
        node->right = deleteNode(node->right, temp->key);
    }

    return node;
}

TreeNode* BinarySearchTree::minValueNode(TreeNode* node) {
    TreeNode* current = node;
    while (current && current->left) {
        current = current->left;
    }
    return current;
}

bool BinarySearchTree::search(int key) {
    TreeNode* result = searchNode(root, key);
    return result != nullptr;
}

TreeNode* BinarySearchTree::searchNode(TreeNode* node, int key) {
    if (node == nullptr || node->key == key) {
        return node;
    }

    if (key < node->key) {
        return searchNode(node->left, key);
    } else {
        return searchNode(node->right, key);
    }
}

void BinarySearchTree::inOrder() {
    inOrderTraversal(root);
}

void BinarySearchTree::inOrderTraversal(TreeNode* node) {
    if (node == nullptr) {
        return;
    }

    inOrderTraversal(node->left);
    cout << node->key << " ";
    inOrderTraversal(node->right);
}