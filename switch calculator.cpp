#include<bits/stdc++.h>
using namespace std;
int main()
{
    double num1,num2;
    char op;

    cout<<"Enter operator (+,-,*,/) : ";
    cin>>op;

    cout<<"Enter two number : ";
    cin>>num1>>num2;

    switch(op)
    {
    case '+':
        cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
        break;

    case '-':
        cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
        break;

    case '*':
        cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
        break;

    case '/':
        cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
        break;

    default:
        cout<<"Not a Valid Operator"<<endl;
    }
    return 0;
}

