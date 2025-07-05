#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,n;
    cout<<"Enter any numbers:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    int min=arr[0];
    for(i=1;i<n;i++)
    {
        if(max<arr[i])
            max=arr[i];
        else if(min>arr[i])
            min=arr[i];
    }
    cout<<"Maximum number is:"<<max<<endl;
    cout<<"Minimum number is:"<<min;
    return 0;
}
