#include<iostream>
using namespace std;
int main()
{
    char lower;
    cout<<"Enter any lowercase letter : ";
    cin>>lower;
    cout<<"The uppercase letter : "<<char(lower-32)<<endl;

    cout<<endl;

    char upper;
    cout<<"Enter any uppercase letter : ";
    cin>>upper;
    cout<<"The lowercase letter : "<<char(upper+32)<<endl;

    return 0;

}

