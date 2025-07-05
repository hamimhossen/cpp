#include<iostream>
using namespace std;
class Test
{
private:
    double base;
    double height;
public:
    void input()
    {
        cout<<"Enter the base:";
        cin>>base;
        cout<<"Enter the height:";
        cin>>height;
    }
    friend void area(Test ob);
};
void area(Test ob)
{
    double A=0.5*ob.base*ob.height;
    cout<<"Area of triangle:"<<A<<endl;
}
int main()
{
    Test obj;
    obj.input();
    area(obj);
    return 0;
}

