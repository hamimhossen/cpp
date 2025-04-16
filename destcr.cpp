#include<iostream>
using namespace std;
class Rectangle
{
public:
    int length;
    int width;
    Rectangle(int l,int w)
    {
        length=l;
        width=w;
    }
    ~Rectangle()
    {
        cout<<"Destroyed"<<endl;
    }
    void display()
    {
        cout<<length<<" "<<width<<endl;
    }
};
int main()
{
    int s,p;
    cin>>s>>p;
    Rectangle obj(s,p);
    obj.display();
    return 0;
}
