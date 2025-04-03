#include <iostream>
using namespace std;

// First base class
class Parent1 {
public:
    void display1() {
        cout << "This is the display1() method of Parent1 class" << endl;
    }
};

// Second base class
class Parent2 {
public:
    void display2() {
        cout << "This is the display2() method of Parent2 class" << endl;
    }
};

// Derived class inheriting from multiple base classes
class Child : public Parent1, public Parent2 {
public:
    void childDisplay() {
        cout << "This is the childDisplay() method of Child class" << endl;
    }
};

int main() {
    Child obj;
    obj.display1();    // Accessing method from Parent1 class
    obj.display2();    // Accessing method from Parent2 class
    obj.childDisplay(); // Accessing method from Child class
    return 0;
}
