#include <iostream>
#include <cmath>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function
    virtual void area() const {
        cout << "Area calculation not defined for generic shape." << endl;
    }

    virtual ~Shape() {} // Virtual destructor
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    void area() const override {
        cout << "Area of Rectangle = " << length * width << endl;
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void area() const override {
        cout << "Area of Circle = " << M_PI * radius * radius << endl;
    }
};

// Class to demonstrate polymorphism
class PolymorphismTest {
public:
    void run() {
        Shape* shape = nullptr;
        int choice;
        cout << "Choose a shape:\n1. Rectangle\n2. Circle\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            double length, width;
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            shape = new Rectangle(length, width);
        } else if (choice == 2) {
            double radius;
            cout << "Enter radius: ";
            cin >> radius;
            shape = new Circle(radius);
        } else {
            cout << "Invalid choice." << endl;
            return;
        }

        // Demonstrating polymorphism
        shape->area();

        // Clean up
        delete shape;
    }
};

// Main function
int main() {
    PolymorphismTest test;
    test.run();

    return 0;
}
