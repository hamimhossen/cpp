#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any numbers:";
    cin>>n;
    int  arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
        if(minIndex!=i)
        {
            swap(arr[i],arr[minIndex]);
        }

    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

