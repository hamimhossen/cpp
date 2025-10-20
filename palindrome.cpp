#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    string rev=s;

    reverse(rev.begin(),rev.end());

    if(rev==s)
        cout<<"YES"<<endl;

    else
        cout<<"NO"<<endl;

    return 0;

}

