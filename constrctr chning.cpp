#include<iostream>
using namespace std;
class student
{
public:
    string name;
    student(string n)
    {
        cout<<"Constructing student class"<<endl;
        name=n;
    }
    ~student()
    {
        cout<<"Destructing student class"<<endl;
    }
    void display1()
    {
        cout<<"Name:"<<name<<endl;
    }
};
class boy:public student
{
public:
    int age;
    boy(int a,string n):student(n)
    {
        cout<<"Constructing boy class"<<endl;
        age=a;
    }
    ~boy()
    {
        cout<<"Destructing boy class"<<endl;
    }
    void display2()
    {
        cout<<"Age:"<<age<<endl;
        //display1();
    }
};
int main()
{
    boy obj(20,"Hamim");
    obj.display1();
    obj.display2();
    return 0;

}

