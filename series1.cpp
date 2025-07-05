#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the last number of the series:";
    cin>>n;
    cout<<"1+2+3+......+"<<n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"="<<sum<<endl;
    return 0;
}

