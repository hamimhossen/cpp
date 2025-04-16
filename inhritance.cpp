#include<iostream>
using namespace std;
class shape
{
public:
    int width,height;
    void setvalue(int a,int b)
    {
        width=a;
        height=b;
    }
};
class rec:public shape
{
public:
    int getarea()
    {
        return width*height;
    }
    int getperimeter()
    {
        return 2*(width+height);
    }
};
class square:public shape
{
public:
    int getarea()
    {
        return width*width;
    }
    int getperimeter()
    {
        return 4*width;
    }
};
class circle:public shape
{
public:
    double getarea()
    {
        return 3.1416*width*width;
    }
    double getperimeter()
    {
        return 2*3.1416*width;
    }
};
int main()
{
    int a,b;
    cin>>a>>b;
    rec r;
    r.setvalue(a,b);
    cout<<"Rec Area:"<<r.getarea()<<endl;
    cout<<"Rec Perimeter:"<<r.getperimeter()<<endl;
    int e,d;
    cin>>e>>d;
    square s;
    s.setvalue(e,d);
    cout<<"Square Area:"<<s.getarea()<<endl;
    cout<<"Square Perimeter:"<<s.getperimeter()<<endl;
    int m,o;
    cin>>m>>o;
    circle c;
    c.setvalue(m,o);
    cout<<"Circle Area:"<<c.getarea()<<endl;
    cout<<"Circle Perimeter:"<<c.getperimeter()<<endl;
    return 0;
}
