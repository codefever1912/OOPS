#include <iostream>
using namespace std;

// Base class
class Parent {
public:
    void parentDisplay() {
        cout << "This is the parentDisplay() method of Parent class" << endl;
    }
};

// First derived class
class Child1 : public Parent {
public:
    void child1Display() {
        cout << "This is the child1Display() method of Child1 class" << endl;
    }
};

// Second derived class
class Child2 : public Parent {
public:
    void child2Display() {
        cout << "This is the child2Display() method of Child2 class" << endl;
    }
};

int main() {
    Child1 obj1;
    Child2 obj2;
    
    obj1.parentDisplay(); // Accessing method from Parent class through Child1 object
    obj1.child1Display(); // Accessing method from Child1 class

    obj2.parentDisplay(); // Accessing method from Parent class through Child2 object
    obj2.child2Display(); // Accessing method from Child2 class
    
    return 0;
}
