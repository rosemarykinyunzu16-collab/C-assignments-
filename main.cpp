#include <iostream>
#include <cmath>  // for M_PI (pi constant)
using namespace std;

// Base class
class Shape {
public:
    // Virtual function
    virtual void area() const {
        cout << "Area calculation not defined for generic shape." << endl;
    }

    // Virtual destructor (good practice when using polymorphism)
    virtual ~Shape() {}
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    // Override area()
    void area() const override {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Override area()
    void area() const override {
        cout << "Area of Circle: " << M_PI * radius * radius << endl;
    }
};

// Main function
int main() {
    Shape* shape1 = new Rectangle(5.0, 3.0);
    Shape* shape2 = new Circle(4.0);

    shape1->area();  // Outputs area of rec
