#include<iostream>
using namespace std;
int main()
{
    int arr[100],n,i;
    cout<<"Enter any numbers:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int min=arr[0];
    for(i=1;i<n;i++)
    {
        if(min>arr[i])
            min=arr[i];
    }
    cout<<"Minimum number is:"<<min<<endl;
    return 0;
}
