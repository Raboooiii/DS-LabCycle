#include "LabCycle3-3.cpp"

int main() {
    BinarySearchTree bst;

    bst.insert(50);
    bst.insert(30);
    bst.insert(20);
    bst.insert(40);
    bst.insert(70);
    bst.insert(60);
    bst.insert(80);

    cout << "In-order traversal after insertion: ";
    bst.inOrder();
    cout << endl;

    cout << "Searching for 40: " << boolalpha << bst.search(40) << endl;
    cout << "Searching for 90: " << boolalpha << bst.search(90) << endl;

    bst.remove(30);
    cout << "In-order traversal after deletion: ";
    bst.inOrder();
    cout << endl;

    return 0;
}