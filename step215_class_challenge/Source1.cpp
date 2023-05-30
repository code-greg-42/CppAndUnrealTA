#include <iostream>
#include <string>
using namespace std;

class Shape {
public:
    Shape(string color) : color(color) {}

    virtual double get_area() {
        return 0.0;
    }

protected:
    string color;
};

class Rectangle : public Shape {
public:
    Rectangle(string color, double length, double width) : Shape(color), length(length), width(width) {}

    double get_area() override {
        return length * width;
    }

private:
    double length, width;
};

class Circle : public Shape {
public:
    Circle(string color, double radius) : Shape(color), radius(radius) {}

    double get_area() override {
        return 3.14 * radius * radius;
    }

private:
    double radius;
};

class Triangle : public Shape {
public:
    Triangle(string color, double base, double height) : Shape(color), base(base), height(height) {}

    double get_area() override {
        return 0.5 * base * height;
    }

private:
    double base, height;
};

int main() {
    Rectangle myRectangle("Red", 5.0, 6.0);
    Circle myCircle("Blue", 3.0);
    Triangle myTriangle("Green", 4.0, 7.0);

    cout << "Area of rectangle: " << myRectangle.get_area() << endl;
    cout << "Area of circle: " << myCircle.get_area() << endl;
    cout << "Area of triangle: " << myTriangle.get_area() << endl;

    return 0;
}
