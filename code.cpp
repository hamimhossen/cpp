#include<iostream>
using namespace std;
class student
{
    string name;
    string program;
    int id;
public:
    void input()
    {
        cout<<"Enter your name=";
        getline(cin,name);
        cout<<"Enter your program=";
        getline(cin,program);
        cout<<"Enter your id=";
        cin>>id;
    }
    friend int display(student obj);
};
int display(student obj)
{
    obj.name;
    obj.program;
    obj.id;
    cout<<"My name is = "<<obj.name<<endl;
    cout<<"My program is = "<<obj.program<<endl;
    cout<<"My id is = "<<obj.id<<endl;
}
int main()
{
    student obj1;
    obj1.input();
    display(obj1);
    return 0;
}
