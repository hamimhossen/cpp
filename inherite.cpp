#include<iostream>
using namespace std;
class Employee
{
public:
    string name;
    int id;
    int salary;
    void setvalue(string n,int i,int s)
    {
        name=n;
        id=i;
        salary=s;
    }
};
class programmer:public Employee
{
public:
    int bonus=2000;
    int Total_Payable_Salary()
    {
        return salary+bonus;
    }
};
int main()
{
    string a;
    int b,c;
    cout<<"Enter the name:";
    cin>>a;
    cout<<"Enter the id:";
    cin>>b;
    cout<<"Enter the salary:";
    cin>>c;
    programmer obj;
    obj.setvalue(a,b,c);
    cout<<"Total salary:"<<obj.Total_Payable_Salary();
    return 0;
}
