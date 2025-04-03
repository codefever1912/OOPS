#include <iostream>
using namespace std;

class Calculator {
public:
    // Inline function for addition
    inline int add(int a, int b) {
        return a + b;
    }

    // Inline function for subtraction
    inline int subtract(int a, int b) {
        return a - b;
    }

    // Inline function for multiplication
    inline int multiply(int a, int b) {
        return a * b;
    }

    // Inline function for division
    inline float divide(float a, float b) {
        if (b == 0) {
            cout << "Error: Division by zero is not allowed" << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    Calculator calc;

    cout << "Addition: " << calc.add(10, 5) << endl;
    cout << "Subtraction: " << calc.subtract(10, 5) << endl;
    cout << "Multiplication: " << calc.multiply(10, 5) << endl;
    cout << "Division: " << calc.divide(10, 5) << endl;

    return 0;
}
