#include <iostream>
using namespace std;

// Base class
class Base {
public:
    void displayBase() {
        cout << "This is the displayBase() method of Base class" << endl;
    }
};

// Intermediate class inheriting from Base class
class Intermediate : public Base {
public:
    void displayIntermediate() {
        cout << "This is the displayIntermediate() method of Intermediate class" << endl;
    }
};

// Another base class
class AnotherBase {
public:
    void displayAnotherBase() {
        cout << "This is the displayAnotherBase() method of AnotherBase class" << endl;
    }
};

// Derived class inheriting from Intermediate class and AnotherBase class
class Derived : public Intermediate, public AnotherBase {
public:
    void displayDerived() {
        cout << "This is the displayDerived() method of Derived class" << endl;
    }
};

int main() {
    Derived obj;
    obj.displayBase();           // Accessing method from Base class via Intermediate class
    obj.displayIntermediate();  // Accessing method from Intermediate class
    obj.displayAnotherBase();   // Accessing method from AnotherBase class
    obj.displayDerived();       // Accessing method from Derived class
    return 0;
}
