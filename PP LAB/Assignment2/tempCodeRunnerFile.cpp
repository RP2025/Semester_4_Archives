#include <iostream>
using namespace std;

template <typename T>
void Eswap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 5, b = 10;
    cout << "Integer a= " << a << " , b= " << b << endl;
    Eswap(a, b); // a is now 10 and b is now 5
    cout << "Integer a= " << a << " , b= " << b << endl;

    short c = 15, d = 20;
    cout << "Short a= " << c << " , b= " << d << endl;
    Eswap(c, d); // c is now 20 and d is now 15
    cout << "Short a= " << c << " , b= " << d << endl;

    float e = 2.5, f = 3.5;
    cout << "Float a= " << e << " , b= " << f << endl;
    Eswap(e, f); // e is now 3.5 and f is now 2.5
    cout << "Float a= " << e << " , b= " << f << endl;

    double g = 4.5, h = 5.5;
    cout << "Double a= " << g << " , b= " << h << endl;
    Eswap(g, h); // g is now 5.5 and h is now 4.5
    cout << "Double a= " << g << " , b= " << h << endl;

    struct Point {
        int x, y;
    };
    
    Point p1 = {1, 2}, p2 = {3, 4};
    cout << "Sturcutre - A pair: a1= " << p1.x << " a2= " << p1.y << endl;
    cout << "Sturcutre - A pair: b1= " << p2.x << " b2= " << p2.y << endl;
    Eswap(p1, p2);
    cout << "Sturcutre - A pair: a1= " << p1.x << " a2= " << p1.y << endl;
    cout << "Sturcutre - A pair: b1= " << p2.x << " b2= " << p2.y << endl;
}