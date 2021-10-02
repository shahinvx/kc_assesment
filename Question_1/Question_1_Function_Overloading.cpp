#include <iostream>
using namespace std;

class Area          // The class
{
public:
    void area_calc(float r)
    {
        cout<<"Area of Circle    : "<<3.1416 * (r*r)<<endl;
    }

    void area_calc(float a, float b)
    {
        cout<<"Area of Rectangle : "<<a * b<<endl;
    }
};

class Circle
{
public:
    float rad;
    Circle(float r){
        rad = r;
    }
};

class Rectangle
{
public:
    float a, b;
    Rectangle(float x, float y){
        a = x;
        b = y;
    }
};

int main()
{
    Area class_area;
    Circle class_circle(4);
    Rectangle class_rectangle(3,4);
    cout<<"    Runtime Polymorphism"<<endl<<endl;
    class_area.area_calc(class_circle.rad);
    class_area.area_calc(class_rectangle.a, class_rectangle.b);

    return 0;
}
