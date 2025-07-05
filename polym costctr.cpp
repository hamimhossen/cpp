#include<iostream>
using namespace std;
class shape
{
public:
    double dim1,dim2;
    shape(double a,double b)
    {
        dim1=a;
        dim2=b;
    }

};
class triangle:public shape
{
public:
    triangle(double a,double b)
    :shape(a,b)
    {

    }
    double area()
    {
        return 0.5*dim1*dim2;
    }
};
class rectangle:public shape
{
public:
    rectangle(double a,double b)
    :shape(a,b)
    {

    }
    double area()
    {
        return dim1*dim2;
    }
};
int main()
{
    triangle t(5,10);
    cout<<"Triangle area:"<<t.area()<<endl;
    rectangle r(5,10);
    cout<<"Rectangle area:"<<r.area()<<endl;
    return 0;
}

