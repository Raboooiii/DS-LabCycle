#include <iostream>
#include <stack>
using namespace std;

template<typename T>
class Fibonacci {
private:
    stack<T> fibStack;
public:
    Fibonacci();
    T fibonacciRecursive(T n);
};

int recursiveFunction(int n);

