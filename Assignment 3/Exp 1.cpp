#include <iostream>
using namespace std;

class Shape {
protected:
    double height;
    double width;
public:
    Shape(double h, double w) : height(h), width(w) {}
};

class Rectangle : public Shape {
public:
    Rectangle(double h, double w) : Shape(h, w) {}
    
    double area() {
        return height * width;
    }

    double perimeter() {
        return 2 * (height + width);
    }
};

class Triangle : public Shape {
public:
    Triangle(double h, double w) : Shape(h, w) {}
    
    double area() {
        return 0.5 * height * width;
    }

    // Calculating the perimeter of a triangle requires additional information about its sides.
    // Without that information, we can return a placeholder value.
    double perimeter() {
        return -1.0; // Placeholder for undefined perimeter.
    }
};

int main() {
    Rectangle rect(4, 6);
    cout << "Rectangle Area: " << rect.area() << endl;
    cout << "Rectangle Perimeter: " << rect.perimeter() << endl;

    Triangle tri(3, 5);
    cout << "Triangle Area: " << tri.area() << endl;
    cout << "Triangle Perimeter: " << tri.perimeter() << endl;

    return 0;
}
