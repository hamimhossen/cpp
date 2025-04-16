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
class Rectangle:public shape
{
public:
    int getarea()
    {
        return width*height;
    }
};
int main()
{
    Rectangle obj;
    int a,b;
    cout<<"Enter width and height:";
    cin>>a>>b;
    obj.setvalue(a,b);
    cout<<obj.getarea();
    return 0;
}
