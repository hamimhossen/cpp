#include<iostream>
using namespace std;
class student
{
public:
    int studentId;
    student()
    {
        studentId=0;
        cout<<"Default constructor of student called"<<endl;
    }
    student(int sid)
    {
        studentId=sid;
        cout<<"Parameterized constructor of student called"<<endl;
    }
    void studentdetails()
    {
        cout<<"Student Id:"<<studentId<<endl;
    }

};
class employee
{
public:
    int age;
    float stipend;
    employee()
    {
        age=0;
        stipend=0;
        cout<<"Default constructor of employee called"<<endl;
    }
    employee(int a,float s)
    {
        age=a;
        stipend=s;
        cout<<"Parameterized constructor of employee called"<<endl;
    }
    void employeedetails()
    {
        cout<<"Employee age:"<<age<<endl<<"Employee stipend:"<<stipend<<endl;
    }
};
class teachingassistant:public student,public employee
{
public:
    string name;
    teachingassistant()
    {
        name=" ";
        cout<<"Default constructor of teaching assistant called"<<endl;
    }
    teachingassistant(string n,int sid,int a,float s):student(sid),employee(a,s)
    {
        name=n;
        cout<<"Parameterized constructor of teaching assistant called"<<endl;
    }
    void teachingassistantdetails()
    {
        cout<<"Name:"<<name<<endl;
        studentdetails();
        employeedetails();
    }
};
int main()
{
    teachingassistant obj1;
    obj1.teachingassistantdetails();

    teachingassistant obj2("Hamim",172,21,500.50);
    obj2.teachingassistantdetails();
    return 0;
}

