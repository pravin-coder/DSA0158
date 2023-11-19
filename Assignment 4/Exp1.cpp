#include <iostream>

class Shape {
public:
    virtual float area() const = 0; // Pure virtual function
};

class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    float area() const override {
        return length * width;
    }
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    float area() const override {
        return 3.14 * radius * radius; // Using a simple approximation of pi
    }
};

int main() {
    Rectangle rectangle(5, 3);
    Circle circle(2);

    std::cout << "Rectangle Area: " << rectangle.area() << std::endl;
    std::cout << "Circle Area: " << circle.area() << std::endl;

    return 0;
}
