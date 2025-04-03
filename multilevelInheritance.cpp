#include <iostream>
using namespace std;

// Base class
class GrandParent {
public:
    void grandParentDisplay() {
        cout << "This is the grandParentDisplay() method of GrandParent class" << endl;
    }
};

// Intermediate class inheriting from GrandParent class
class Parent : public GrandParent {
public:
    void parentDisplay() {
        cout << "This is the parentDisplay() method of Parent class" << endl;
    }
};

// Derived class inheriting from Parent class
class Child : public Parent {
public:
    void childDisplay() {
        cout << "This is the childDisplay() method of Child class" << endl;
    }
};

int main() {
    Child obj;
    obj.grandParentDisplay(); // Accessing method from GrandParent class
    obj.parentDisplay();      // Accessing method from Parent class
    obj.childDisplay();      // Accessing method from Child class
    return 0;
}
