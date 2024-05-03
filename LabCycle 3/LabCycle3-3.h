#include <iostream>
using namespace std;

class TreeNode {
public:
    int key;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : key(val), left(nullptr), right(nullptr) {}
};

class BinarySearchTree {
private:
    TreeNode* root;

    void destroyTree(TreeNode* node);
    TreeNode* insertNode(TreeNode* node, int key);
    TreeNode* deleteNode(TreeNode* node, int key);
    TreeNode* minValueNode(TreeNode* node);
    TreeNode* searchNode(TreeNode* node, int key);
    void inOrderTraversal(TreeNode* node); 

public:
    BinarySearchTree();
    ~BinarySearchTree();

    void insert(int key);
    void remove(int key);
    bool search(int key);
    void inOrder(); 
};