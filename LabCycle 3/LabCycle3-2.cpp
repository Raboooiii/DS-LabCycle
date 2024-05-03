#include "LabCycle3-2.h"

template<typename T>
BinaryTree<T>::BinaryTree() : root(nullptr) {}

template<typename T>
BinaryTree<T>::~BinaryTree() {
    destroyTree(root);
}

template<typename T>
void BinaryTree<T>::destroyTree(TreeNode<T>* node) {
    if (node) {
        destroyTree(node->left);
        destroyTree(node->right);
        delete node;
    }
}

template<typename T>
void BinaryTree<T>::insert(const T& key) {
    if (!root) {
        root = new TreeNode<T>(key);
        return;
    }

    TreeNode<T>* current = root;
    while (true) {
        if (key < current->key) {
            if (current->left) {
                current = current->left;
            } else {
                current->left = new TreeNode<T>(key);
                return;
            }
        } else {
            if (current->right) {
                current = current->right;
            } else {
                current->right = new TreeNode<T>(key);
                return;
            }
        }
    }
}

template<typename T>
void BinaryTree<T>::preOrderTraversal(TreeNode<T>* node) {
    if (node) {
        std::cout << node->key << " ";
        preOrderTraversal(node->left);
        preOrderTraversal(node->right);
    }
}

template<typename T>
void BinaryTree<T>::inOrderTraversal(TreeNode<T>* node) {
    if (node) {
        inOrderTraversal(node->left);
        std::cout << node->key << " ";
        inOrderTraversal(node->right);
    }
}

template<typename T>
void BinaryTree<T>::postOrderTraversal(TreeNode<T>* node) {
    if (node) {
        postOrderTraversal(node->left);
        postOrderTraversal(node->right);
        std::cout << node->key << " ";
    }
}

template<typename T>
void BinaryTree<T>::preOrder() {
    preOrderTraversal(root);
    std::cout << std::endl;
}

template<typename T>
void BinaryTree<T>::inOrder() {
    inOrderTraversal(root);
    std::cout << std::endl;
}

template<typename T>
void BinaryTree<T>::postOrder() {
    postOrderTraversal(root);
    std::cout << std::endl;
}