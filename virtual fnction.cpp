#include<iostream>
using namespace std;
class sound
{
public:
    virtual void print()        //virtual function
    {
        cout<<"your sound"<<endl;
    }
};
class dog:public sound
{
public:
    void print()
    {
        cout<<"Ghew"<<endl;
    }
};
class cat:public sound
{
public:
    void print()
    {
        cout<<"Meau"<<endl;
    }
};
int main()
{
    sound obj1;
    dog obj2;
    cat obj3;
    sound *ptr;   //base er *ptr creat kore and derived class er function call hoy
    ptr=&obj2;
    ptr->print();
    ptr=&obj3;
    ptr->print();
    return 0;

}

