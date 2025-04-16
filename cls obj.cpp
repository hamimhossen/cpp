#include<iostream>
using namespace std;
class student
{
public:
    int id;
    int age;
    string name;
    student input(int i,int a,string n)
    {
        student obj;
        obj.id=i;
        obj.age=a;
        obj.name=n;
        return obj;
    }
    void display(student obj)
    {
        cout<<"Id:"<<obj.id<<endl;
        cout<<"Age:"<<obj.age<<endl;
        cout<<"Name:"<<obj.name<<endl;
    }
};
int main()
{
    student obj;
    obj=obj.input(172,20,"Hamim");
    obj.display(obj);
    return 0;
}
