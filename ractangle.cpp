#include<iostream>
using namespace std;
class rectangle
{
public:
    int length;
    int width;
    string colour;
    rectangle(int l,int w,string c)
    {
        length=l;
        width=w;
        colour=c;
    }
    void area()
    {
        cout<<length*width<<endl;
    }
    void perimeter()
    {
        cout<<2*(length+width)<<endl;
    }
    void colours()
    {
        if(colour=="red")
        {
            cout<<"Found"<<endl;
        }
        else if(colour=="green")
        {
            cout<<"Found"<<endl;
        }
        else if(colour=="blue")
        {
            cout<<"Found"<<endl;
        }
        else
        {
            cout<<"Not Found"<<endl;
        }
    }
};
int main()
{
    rectangle obj(5,4,"green");
    obj.area();
    obj.perimeter();
    obj.colours();
    return 0;
}
