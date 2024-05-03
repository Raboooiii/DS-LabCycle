#include <iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val);
};

class BinaryTree {
private:
    TreeNode* root;
    void destroyTree(TreeNode* node);

public:
    BinaryTree();
    ~BinaryTree();

    void insert(int val);
    void levelOrderTraversal();
};