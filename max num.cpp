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
    int max=arr[0];
    for(i=1;i<n;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    cout<<"Maximum number is:"<<max<<endl;
    return 0;
}
