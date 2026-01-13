#include<iostream>
using namespace std;
int main()
{
    char c;

    cout<<"Enter any character : ";
    cin>>c;

    if(c=='z')
        cout<<'a'<<endl;

    else
    {
        char nextchar=c+1;
        cout<<"Next Character : "<<nextchar<<endl;
    }

    return 0;
}

