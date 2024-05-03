#include <iostream>
using namespace std;

class BinaryTree {
private:
    int* tree;
    int size;

    void preOrderTraversal(int index);
    void inOrderTraversal(int index);
    void postOrderTraversal(int index);

public:
    BinaryTree(int maxSize);
    ~BinaryTree();

    void insert(int value);
    void preOrder();
    void inOrder();
    void postOrder();
};