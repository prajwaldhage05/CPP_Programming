#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0; // pure virtual method
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }
    double area() {
        return length * width;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) {
        radius = r;
    }
    double area() {
        return 3.14 * radius * radius;
    }
};

class Square : public Shape {
private:
    double side;
public:
    Square(double s) {
        side = s;
    }
    double area() {
        return side * side;
    }
};

int main() {
    Shape *s;
    Rectangle r(10, 5);
    s = &r;
    cout << "Area of Rectangle: " << s->area() << endl;

    Circle c(5);
    s = &c;
    cout << "Area of Circle: " << s->area() << endl;

    Square sq(8);
    s = &sq;
    cout << "Area of Square: " << s->area() << endl;

    return 0;
}
