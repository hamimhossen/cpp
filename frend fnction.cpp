#include<iostream>
using namespace std;
class Test
{
private:
    string name,dept;
    int age;
public:
    void input()
    {
        cout<<"Enter the name:";
        getline(cin,name);
        cout<<"Enter the age:";
        cin>>age;
        cout<<"Enter the department:";
        cin>>dept;
        cout<<endl;
    }
    friend void area(Test ob);
};
void area(Test ob)
{
    cout<<"My name is:"<<ob.name<<endl;
    cout<<"My age is:"<<ob.age<<endl;
    cout<<"My department is:"<<ob.dept<<endl;
}
int main()
{
    Test obj;
    obj.input();
    area(obj);
    return 0;
}

