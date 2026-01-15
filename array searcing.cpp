#include<iostream>
using namespace std;
int main()
{
    int num[100];
    int value,pos=-1,i,n;
    cout<<"Enter any numbers:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>num[i];
    }
    cout<<"Enter any value:";
    cin>>value;
    for(i=0;i<n;i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    {
        cout<<"Item is not found"<<endl;
    }
    else
    {
        cout<<"Item is found at "<<pos<<" position"<<endl;
    }
    return 0;
}

