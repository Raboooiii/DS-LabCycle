#include "LabCycle2-11.cpp"

int main() {
    Fibonacci<int> fibInt;
    Fibonacci<long> fibLong;
    Fibonacci<long long> fibLongLong;
  
    int nInt ;
    long nLong ;
    long long nLongLong;
    
    cout<<"Enter a value to find Fibonacci of ";
    cin>>nInt;
    cout << "Fibonacci of " << nInt << " (int): " << fibInt.fibonacciRecursive(nInt-1) << endl;
    cout<<"Enter a value to find Fibonacci of ";
    cin>>nLong;
    cout << "Fibonacci of " << nLong << " (long): " << fibLong.fibonacciRecursive(nLong-1) << endl;
    cout<<"Enter a value to find Fibonacci of ";
    cin>>nLongLong;
    cout << "Fibonacci of " << nLongLong << " (long long): " << fibLongLong.fibonacciRecursive(nLongLong-1) << endl;

    return 0;
}

