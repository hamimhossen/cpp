#include<iostream>
using namespace std;
class person
{
public:
    string name;
    int age;
    void display1()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
};
class student:public person
{
public:
    int id;
    void display2()
    {
        cout<<"Id:"<<id<<endl;
        display1();
    }
};
int main()
{
    student obj;
    obj.id=172;
    obj.name="Hamim";
    obj.age=20;
    obj.display2();
    return 0;
}
