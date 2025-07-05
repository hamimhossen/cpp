#include<iostream>
using namespace std;
class Distance
{
public:
    int feet,inch;
    Distance()
    {
        feet=0;
        inch=0;
    }
    Distance(int f,int i)
    {
        feet=f;
        inch=i;
    }
    Distance operator+(Distance& ob)
    {
        Distance obj;
        obj.feet=feet+ob.feet;
        obj.inch=inch+ob.inch;
        return obj;
    }
    void display()
    {
        cout<<"Total feet and inch: "<<feet<< "'" <<inch<<endl;
    }
};
int main()
{
    Distance a1(8,9);
    Distance a2(10,2);
    Distance a3=a1+a2;
    a3.display();
    return 0;
}

