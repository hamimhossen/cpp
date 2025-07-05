#include<iostream>
using namespace std;
class base
{
public:
    virtual int sum(int a,int b)
    {
        cout<<"Base class sum called:"<<endl;
        return a+b;
    }
};
class derived:public base
{
public:
    int sum(int a,int b)
    {
        cout<<"Derived class sum called:"<<endl;
        return a+b+10;
    }
};
int main()
{
    base *ptr;
    derived obj;
    ptr=&obj;
    int result=ptr->sum(5,3);
    cout<<"Result:"<<result<<endl;
    return 0;
}

