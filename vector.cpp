#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any numbers:";
    cin>>n;
    vector<int>num(n);
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;
    cout<<num.size()<<endl;    //size
    cout<<num.front()<<endl;   //1st value print
    cout<<num.back()<<endl;    //last value print
    num.pop_back();              //last value delete
    for(int i=0;i<num.size();i++)
    {
        cout<<num[i]<<" ";
    }
    num.erase(num.begin()+2,num.begin()+4);   //value delete
    for(int i=0;i<num.size();i++)
    {
        cout<<num[i]<<" ";
    }
    num.insert(num.begin()+2,3,4);       //value add kora
    for(int i=0;i<num.size();i++)
    {
        cout<<num[i]<<" ";
    }
    sort(num.begin(),num.end());
    for(int i=0;i<n;i++)
    {
        cout<<num[i]<<" ";
    }
    reverse(num.begin(),num.end());
    for(int i=0;i<n;i++)
    {
        cout<<num[i]<<" ";
    }
    return 0;
}

