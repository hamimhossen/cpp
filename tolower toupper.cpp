#include<iostream>
using namespace std;
int main()
{
    char lower,upper;
    cout<<"Enter any lowercase letter : ";
    cin>>lower;

    upper=toupper(lower);
    cout<<"The uppercase letter is : "<<upper<<endl;

    cout<<endl;

    char uppers,lowers;
    cout<<"Enter any uppercase letter : ";
    cin>>uppers;

    lowers=tolower(uppers);
    cout<<"The lowercase letter is : "<<lowers<<endl;

    return 0;
}

