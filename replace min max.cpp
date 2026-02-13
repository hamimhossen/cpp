#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int minn=0;
    int maxx=0;
    for(int i=1; i<n; i++)
    {
        if(arr[minn]>arr[i])
            minn=i;
        else if(arr[maxx]<arr[i])
             maxx=i;
    }
    swap(arr[maxx],arr[minn]);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
