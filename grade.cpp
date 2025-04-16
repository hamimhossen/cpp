#include<iostream>
using namespace std;
class student
{
public:
    string name;
    int id;
    int marks;
    student(string n,int i,int m)
    {
        name=n;
        id=i;
        marks=m;
    }
    void calculate()
    {
        if(marks>80)
        {
            cout<<"A+"<<endl;
        }
        else if(marks>75)
        {
            cout<<"A"<<endl;
        }
        else if(marks>70)
        {
            cout<<"A-"<<endl;
        }
        else if(marks>65)
        {
            cout<<"B+"<<endl;
        }
        else
        {
            cout<<"F"<<endl;
        }
    }
    void display()
    {
        cout<<name<<" "<<id<<" "<<marks<<endl;
    }
};
int main()
{
    string s;
    int o,p;
    cin>>s>>o>>p;
    student obj(s,o,p);
    obj.display();
    obj.calculate();
    return 0;
}
