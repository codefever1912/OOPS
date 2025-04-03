#include <iostream>
using namespace std;

// Base class
class Base {
public:
    // Method to display a message
    virtual void displayMessage() {
        cout << "This is a message from the Base class" << endl;
    }
};

// Derived class inheriting from Base class
class Derived : public Base {
public:
    // Override the displayMessage method from the Base class
    void displayMessage() override {
        cout << "This is a message from the Derived class" << endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    // Call displayMessage on objects of both classes
    baseObj.displayMessage();   // Calls Base::displayMessage
    derivedObj.displayMessage(); // Calls Derived::displayMessage

    // Using a Base pointer to call displayMessage on a Derived object
    Base* basePtr = &derivedObj;
    basePtr->displayMessage(); // Calls Derived::displayMessage

    return 0;
}
