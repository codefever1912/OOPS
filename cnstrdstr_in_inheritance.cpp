#include <iostream>
using namespace std;

// Base class representing a generic shape
class Shape {
protected:
    int width, height;

public:
    // Default constructor
    Shape() {
        width = 0;
        height = 0;
        cout << "Generic shape created with width = " << width << " and height = " << height << endl;
    }

    // Parameterized constructor
    Shape(int w, int h) : width(w), height(h) {
        cout << "Generic shape created with width = " << width << " and height = " << height << endl;
    }

    // Virtual destructor
    virtual ~Shape() {
        cout << "Shape destroyed" << endl;
    }

    // Method to calculate area (will be overridden by derived classes)
    virtual float area() const = 0;
};

// Derived class representing a rectangle
class Rectangle : public Shape {
public:
    // Default constructor
    Rectangle() : Shape() {}

    // Parameterized constructor
    Rectangle(int w, int h) : Shape(w, h) {}

    // Implementation of area calculation for rectangle
    float area() const override {
        return width * height;
    }

    // Destructor
    ~Rectangle() {
        cout << "Rectangle destroyed" << endl;
    }
};

int main() {
    cout << "Creating a generic shape:" << endl;
    Shape* shape = new Rectangle(5, 10);
    cout << "Area of the shape: " << shape->area() << endl;
    delete shape;
    return 0;
}
