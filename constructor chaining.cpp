#include<iostream>
using namespace std;
class employee
{
public:
    string name;
    employee(string n)
    {
        name=n;
    }
    void display1()
    {
        cout<<"Name:"<<name<<endl;
    }
};
class developer:public employee
{
public:
    string language;
    developer(string l,string n):employee(n)
    {
        language=l;
    }
    void display2()
    {
        cout<<"Language:"<<language<<endl;
    }
};
class teamlead:public developer
{
public:
    int teamsize;
    teamlead(int t,string n,string l):developer(l,n)
    {
        teamsize=t;
    }
    void display3()
    {
        cout<<"Team size:"<<teamsize<<endl;
        display1();
        display2();
    }
};
int main()
{
    int a;
    string b,c;
    cout<<"Enter the team size:";
    cin>>a;
    cout<<"Enter the name:";
    cin>>b;
    cout<<"Enter the language:";
    cin>>c;
    teamlead obj(a,b,c);
    obj.display3();
    return 0;
}
