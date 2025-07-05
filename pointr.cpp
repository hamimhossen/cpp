#include<iostream>
using namespace std;
class base
{
    int x;
public:
    void setx(int i)
    {
        x=i;
    }
    int getx()
    {
        return x;
    }
};
class derived:public base
{
    int y;
public:
    void sety(int j)
    {
        y=j;
    }
    int gety()
    {
        return y;
    }
};
int main()
{
    base *ptr;
    base obj1;
    derived obj2;
    ptr=&obj1;
    ptr->setx(10);
    cout<<"Base object x:"<<ptr->getx()<<endl;
    ptr=&obj2;
    ptr->setx(99);
    obj2.sety(88);
    cout<<"Derived object x:"<<ptr->getx()<<endl;
    cout<<"Derived object y:"<<obj2.gety()<<endl;
    return 0;
}

