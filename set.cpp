#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,value;
    cout<<"Enter any numbers:";
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        s.insert(value);
    }
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<s.size();
    return 0;
}

