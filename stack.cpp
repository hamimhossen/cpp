#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any numbers:";
    cin>>n;
    int value;
    stack<int>st;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        st.push(value);
    }
    cout<<st.size()<<endl;
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}

