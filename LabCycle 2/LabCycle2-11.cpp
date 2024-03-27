#include "LabCycle2-11.h"

template<typename T>
Fibonacci<T>::Fibonacci() {}

template<typename T>
T Fibonacci<T>::fibonacciRecursive(T n) {
    if (n <= 1) {
        return n;
    }
    T fib1 = fibonacciRecursive(n - 1);
    T fib2 = fibonacciRecursive(n - 2);
    return fib1 + fib2;
}

template class Fibonacci<int>;
template class Fibonacci<long>;
template class Fibonacci<long long>;