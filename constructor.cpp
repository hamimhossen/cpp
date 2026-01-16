#include<iostream>
#define PI 3.14159
using namespace std;
class circle
{
public:
    double radius;
    circle(double r)
    {
        radius=r;
    }
    void area()
    {
        cout<<PI*radius*radius<<endl;
    }
    void circumference()
    {
        cout<<2*PI*radius<<endl;
    }
    void display()
    {
        cout<<radius<<endl;
    }
};
int main()
{
    circle obj(5.2);
    obj.display();
    obj.area();
    obj.circumference();
    return 0;
}
