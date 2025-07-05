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
    Complex operator+(Complex obj)
    {
        Complex sum;
        sum.real=real+obj.real;
        sum.imag=imag+obj.imag;
        return sum;
    }
    Complex operator-(Complex obj)
    {
        Complex sub;
        sub.real=real-obj.real;
        sub.imag=imag-obj.imag;
        return sub;
    }
    Complex operator*(Complex obj)
    {
        Complex m;
        m.real=(real*obj.real)-(imag*obj.imag);
        m.imag=(real*obj.imag)+(imag*obj.real);
        return m;
    }
    void display()
    {
        cout<<real<< " + " <<imag<< " i " <<endl;
    }
};
int main()
{
    Complex c1(10,12);
    Complex c2(5,6);

    Complex sum=c1+c2;
    Complex diff=c1-c2;
    Complex pod=c1*c2;

    cout<<"First complex numbers:";
    c1.display();
    cout<<"Second complex numbers:";
    c2.display();

    cout<<"Sum:";
    sum.display();

    cout<<"Difference:";
    diff.display();

    cout<<"Multiplication:";
    pod.display();

    return 0;
}

