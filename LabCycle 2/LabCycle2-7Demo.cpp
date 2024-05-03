#include "LabCycle2-7.cpp"

void displayMenu() {
    cout << "Menu:" << endl;
    cout << "1. Push Left" << endl; 
    cout << "2. Push Right" << endl; 
    cout << "3. Pop Left" << endl; 
    cout << "4. Pop Right" << endl;
    cout << "5. Display Stack" << endl; 
    cout << "6.  Exit" << endl; 
    cout << "Enter your choice: ";
}
int main() {
    TwoWayStack<int> stack(5); 
    int choice;
    int element;

    do  { displayMenu();
        cin >> choice;

        switch (choice) { 
            case 1:
            cout << "Enter element to push left: "; 
            cin >>  element; 
            stack.pushLeft(element);
        break; 
        case 2:
            cout << "Enter element to push right: "; 
            cin >>  element; 
            stack.pushRight(element);
        break; 
        case 3:
            cout << "Popped Left: " << stack.popLeft() << endl; 
            break;
        case 4:
            cout << "Popped Right: " << stack.popRight() << endl; 
            break;
        case 5:
            stack.display();
        break; 
        case 6:
            cout << "Exiting program." << endl; 
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}
