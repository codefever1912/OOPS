#include <iostream>
using namespace std;

// Define a complex number class
class Complex {
private:
    double real, imag;

public:
    Complex(double r = 0.0, double i = 0.0):real(r), imag(i) {}

    // Overload the + operator to add two complex numbers
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Overload the << operator to print complex numbers
    friend ostream& operator<<(ostream& out, const Complex& c);
};

// Function to print complex numbers
ostream& operator<<(ostream& out, const Complex& c) {
    out << c.real << " + " << c.imag << "i";
    return out;
}

int main() {
    Complex c1(3.0, 4.0);
    Complex c2(1.0, -2.0);

    Complex c3 = c1 + c2;  

    cout << "The sum of " << c1 << " and " << c2 << " is " << c3 << endl;

    return 0;
}