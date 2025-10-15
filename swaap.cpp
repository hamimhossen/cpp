#include<iostream>
using namespace std;

int main()
{
    int num1=70;
    int num2=60;

    num1=num1-num2;    //10
    num2=num1+num2;    //70
    num1=num2-num1;   //60

    cout<<"Number 1: "<<num1<<endl;
    cout<<"Number 2: "<<num2<<endl;

    return 0;
}
