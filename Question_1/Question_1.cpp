#include <iostream>
using namespace std;

class Area
{
public:
    void area_calc()
    {
        cout << "Base Class Area :) \n" ;
        cout<<"    Runtime Polymorphism Start"<<endl<<endl;
    }
};

class Circle : public Area
{
public:
    float rad;
    Circle(float r)
    {
        rad = r;
    }
    void area_calc()
    {
        cout<<"Area of Circle    : "<<3.1416 * (rad*rad)<<endl;
    }
};

class Rectangle : public Area
{
public:
    float a, b;
    Rectangle(float x, float y)
    {
        a = x;
        b = y;
    }
    void area_calc()
    {
        cout<<"Area of Rectangle : "<<a * b<<endl;
    }
};

int main()
{

    Area class_area;
    Circle class_circle(4);
    Rectangle class_rectangle(3,4);

    class_area.area_calc();
    class_circle.area_calc();
    class_rectangle.area_calc();
    return 0;
}
