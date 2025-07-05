#include<iostream>
using namespace std;
class Test
{
private:
    double base=10.5;
    double height=5.5;
    friend void area(Test ob);
};
void area(Test ob)
{
    double A=0.5*ob.base*ob.height;
    cout<<"Area of triangle:"<<A<<endl;
}
int main()
{
    Test obj;
    area(obj);
    return 0;
}

