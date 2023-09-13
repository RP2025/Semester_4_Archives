#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
    virtual double area() = 0;
};

class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(double b, double h) {
        base = b;
        height = h;
    }

    double area() {
        return 0.5 * base * height;
    }
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
        return M_PI * radius * radius;
    }
};

int main() {
    Shape* shapes[3];
    shapes[0] = new Triangle(3.0, 4.0);
    shapes[1] = new Rectangle(5.0, 2.0);
    shapes[2] = new Circle(1.5);

    double totalArea = 0.0;

    for (int i = 0; i < 3; i++) {
        totalArea += shapes[i]->area();
        delete shapes[i];
    }

    cout << "Total area covered by the shapes: " << totalArea << endl;

    return 0;
}