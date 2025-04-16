#include<iostream>
using namespace std;
class triangle
{
public:
    int side1;
    int side2;
    int side3;
    triangle(int s1,int s2,int s3)
    {
        side1=s1;
        side2=s2;
        side3=s3;
    }
    void calculate()
    {
        if(side1==side2 && side1==side3)
        {
            cout<<"Equilateral triangle"<<endl;
        }
        else if(side1==side2 || side1==side3 || side2==side3)
        {
            cout<<"Isosceles triangle"<<endl;
        }
        else
        {
            cout<<"Scalene triangle"<<endl;
        }
    }
    void display()
    {
        cout<<side1<<" "<<side2<<" "<<side3<<endl;
    }
};
int main()
{
    triangle obj(5,3,5);
    obj.display();
    obj.calculate();
    return 0;
}
