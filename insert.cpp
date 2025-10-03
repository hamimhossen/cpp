#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter any name:";
    getline(cin,str);
    cout<<str<<endl;

    int len=str.length();
    cout<<"Length: "<<len<<endl;

    str.insert(2,"sa");
    cout<<str<<endl;

    str.erase(2,2);
    cout<<str<<endl;

    str.replace(2,2,"bn");
    cout<<str<<endl;
    return 0;
}

