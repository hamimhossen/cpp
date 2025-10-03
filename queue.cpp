#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,value;
    cout<<"Enter any numbers:";
    cin>>n;
    queue<int>q;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        q.push(value);
    }
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}


