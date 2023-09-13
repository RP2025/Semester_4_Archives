#include <iostream>
#include <vector>
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

    double GetBase(){
        return base;
    }

    double GetHeight(){
        return height;
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

    double GetLength(){
        return length;
    }

    double GetWidth(){
        return width;
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

    double GetRadius(){
        return radius;
    }
};

class ShapeStack {
private:
    vector<Shape*> shapes;

public:
    void Push(Shape* shape) {
        shapes.push_back(shape);
    }

    Shape* Pop() {
        if (shapes.empty()) {
            return nullptr;
        }

        Shape* shape = shapes.back();
        shapes.pop_back();
        return shape;
    }

    void Display() {
        cout << "Shapes in stack:" << endl;

        for (Shape* shape : shapes) {
            if (Triangle* triangle = dynamic_cast<Triangle*>(shape)) {
                cout << "Triangle: base=" << triangle->GetBase() << ", height=" << triangle->GetHeight() << endl;
            }
            else if (Rectangle* rectangle = dynamic_cast<Rectangle*>(shape)) {
                cout << "Rectangle: length=" << rectangle->GetLength() << ", width=" << rectangle->GetWidth() << endl;
            }
            else if (Circle* circle = dynamic_cast<Circle*>(shape)) {
                cout << "Circle: radius=" << circle->GetRadius() << endl;
            }
        }
    }

    double TotalAreaCovered() {
        double totalArea = 0.0;

        for (Shape* shape : shapes) {
            totalArea += shape->area();
        }

        return totalArea;
    }
};

int main() {
    ShapeStack shapeStack;
    shapeStack.Push(new Triangle(3.0, 4.0));
    shapeStack.Push(new Rectangle(5.0, 2.0));
    shapeStack.Push(new Circle(1.5));

    shapeStack.Display();
    cout << "Total area covered by the shapes in stack: " << shapeStack.TotalAreaCovered() << endl;

    Shape* poppedShape = shapeStack.Pop();
    if (poppedShape) {
        cout << "Popped shape: " << poppedShape->area() << endl;
        delete poppedShape;
    }

    return 0;
}
