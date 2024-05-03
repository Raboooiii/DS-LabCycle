#include <iostream>
using namespace std;

template<typename T>
struct TreeNode {
    T key;
    TreeNode<T>* left;
    TreeNode<T>* right;

    TreeNode(const T& val) : key(val), left(nullptr), right(nullptr) {}
};

template<typename T>
class BinaryTree {
private:
    TreeNode<T>* root;

    void destroyTree(TreeNode<T>* node);
    void preOrderTraversal(TreeNode<T>* node);
    void inOrderTraversal(TreeNode<T>* node);
    void postOrderTraversal(TreeNode<T>* node);

public:
    BinaryTree();
    ~BinaryTree();

    void insert(const T& key);
    void preOrder();
    void inOrder();
    void postOrder();
};