#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any numbers:";
    cin>>n;
    vector<int>num(n);
    for(int i=0;i<num.size();i++)
    {
        cin>>num[i];
    }
    int m;
    cout<<"Enter any numbers:";
    cin>>m;
    vector<int>nums(m);
    for(int i=0;i<nums.size();i++)
    {
        cin>>nums[i];
    }
    cout<<"Before swapping value"<<endl;
    for(int i=0;i<num.size();i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    swap(num,nums);
    cout<<"After swapping value"<<endl;
     for(int i=0;i<num.size();i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}

