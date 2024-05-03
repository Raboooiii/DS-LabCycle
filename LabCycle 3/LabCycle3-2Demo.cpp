#include "LabCycle3-2.cpp"

int main() {
    BinaryTree<int> bt;

    bt.insert(50);
    bt.insert(30);
    bt.insert(70);
    bt.insert(20);
    bt.insert(40);
    bt.insert(60);
    bt.insert(80);

    cout << "Pre-order traversal: ";
    bt.preOrder();

    cout << "In-order traversal: ";
    bt.inOrder();

    cout << "Post-order traversal: ";
    bt.postOrder();

    return 0;
}