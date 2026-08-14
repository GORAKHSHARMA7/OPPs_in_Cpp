#include <iostream>
using namespace std;

// Inline function
inline int add(int a, int b) {
    return a + b;
}

// Default argument
int subtract(int a, int b = 5) {
    return a - b;
}

// Function overloading
int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int main() {
    cout << "Addition: " << add(10, 5) << endl;

    cout << "Subtraction: " << subtract(10) << endl;

    cout << "Multiplication (int): " << multiply(10, 5) << endl;

    cout << "Multiplication (double): " << multiply(2.5, 4.0) << endl;

    return 0;
}