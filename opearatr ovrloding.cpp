#include<iostream>
using namespace std;
class Complex
{
    int real,imag;
public:
    Complex()
    {
        real=0;
        imag=0;
    }
    Complex(int r,int i)
    {
        real=r;
        imag=i;
    }
    Complex operator+(Complex& obj)
    {
        Complex res;
        res.real=real+obj.real;
        res.imag=imag+obj.imag;
        return res;
    }
    void display()
    {
        cout<<real<<" + i"<<imag<<endl;
    }
};
int main()
{
    Complex c1(10,5);
    Complex c2(2,4);
    Complex c3=c1+c2;
    c3.display();
    return 0;
}

