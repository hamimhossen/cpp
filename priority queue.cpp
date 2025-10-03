#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,value;
    cout<<"Enter any numbers:";
    cin>>n;
    priority_queue<int>pq;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        pq.push(value);
    }
    cout<<pq.size()<<endl;
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}

