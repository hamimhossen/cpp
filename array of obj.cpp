#include<iostream>
using namespace std;
class student
{
public:
    char name[20];
    int marks;
    void setdata()
    {
        cout<<"Name:";
        cin>>name;
        cout<<"Marks:";
        cin>>marks;
    }
    void showdata()
    {
        cout<<name<<" "<<marks<<endl;
    }
};
int main()
{
    student obj[20];
    for(int i=0;i<3;i++)
    {
        cout<<"student information number:"<<(i+1)<<endl;
        obj[i].setdata();
    }
    cout<<"student details:"<<endl;
    for(int i=0;i<3;i++)
    {
        obj[i].showdata();
    }
    return 0;
}
