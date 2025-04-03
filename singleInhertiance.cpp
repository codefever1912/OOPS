#include <iostream>
using namespace std;

// Base class
class Parent {
public:
    void display() {
        cout << "This is the display() method of Parent class" << endl;
    }
};

// Derived class inheriting from Base class
class Child : public Parent {
public:
    void childDisplay() {
        cout << "This is the childDisplay() method of Child class" << endl;
    }
};

int main() {
    Child obj;
    obj.display();      // Accessing method from Parent class
    obj.childDisplay(); // Accessing method from Child class
    return 0;
}
