#include<iostream>
#include<algorithm>
using namespace std;

int binarysearch(int arr[],int n,int data)
{
    int beginn=0;
    int endd=n-1;
    while(beginn<=endd)
    {
        int mid=(beginn+endd)/2;
        if(arr[mid]==data)
        {
            return mid;
        }
        else if(arr[mid]<data)
        {
            beginn=mid+1;
        }
        else
        {
            endd=mid-1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[100];
    cout<<"Enter array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);
    cout<<"Sorted array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int data;
    cout<<"Enter the searching: ";
    cin>>data;

    int result=binarysearch(arr,n,data);
    if(result!=-1)
    {
        cout<<"Value is found at index "<<result<<endl;
    }

    else
    {
        cout<<"Value is not found"<<endl;
    }
    return 0;
}

