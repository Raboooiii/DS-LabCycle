#include "LabCycle2-7.h"

template<typename T> TwoWayStack<T>::TwoWayStack(int stackSize) {
    size = stackSize; 
    array = new T[size]; 
    leftTop = -1; 
    rightTop = size;
}
template<typename T> TwoWayStack<T>::~TwoWayStack() {
    delete[] array;
}

template<typename T>
bool TwoWayStack<T>::isEmpty() {
    return leftTop == -1 && rightTop == size;
}
template<typename T>
bool TwoWayStack<T>::isLeftFull() { 
    return leftTop + 1 == rightTop;
}
template<typename T>
bool TwoWayStack<T>::isRightFull() { 
    return rightTop - 1 == leftTop;
}

template<typename T>
void TwoWayStack<T>::pushLeft(const T& element) { 
    if (isLeftFull() || isEmpty()) {
        cout << "Left Stack Overflow" << endl;
    } else {
        leftTop++;
        array[leftTop] =  element;
    }
}
template<typename T>
void TwoWayStack<T>::pushRight(const T& element) { 
    if (isRightFull() || isEmpty()) {
        cout << "Right Stack Overflow"  << endl;
    } else {
        rightTop--; array[rightTop] = element;
    }
}
 
template<typename T>
T TwoWayStack<T>::popLeft() { 
    if (leftTop == -1) {
        cout << "Left Stack Underflow" << endl; 
        return T();
    } else {
        T element = array[leftTop]; 
        leftTop--;
        return element;
    }
}
template<typename T>
T TwoWayStack<T>::popRight() { 
    if (rightTop == size) {
        cout << "Right Stack Underflow" << endl; 
        return T(); 
    } else {
        T element = array[rightTop]; 
        rightTop++;
        return element;
  } 
}
template<typename  T>
void TwoWayStack<T>::display() { 
    if (isEmpty()) {
        cout << "Two-way Stack is empty" << endl;
    } else {
        cout << "Left Stack Contents:" <<endl; 
        for (int i = 0; i <= leftTop; i++) {
            cout  <<  array[i]  << endl;
        }       
        cout << "Right Stack Contents:" << endl; 
        for (int i = size - 1; i >= rightTop; i--) {
            cout  <<  array[i]  << endl;
        }
    }
}
