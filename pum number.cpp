#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=4; j++)
        {
            if(j==4)
            {
                cout<<"PUM"<<endl;
            }
            else
            {
                cout<<num<<" ";
            }
            num++;
        }
    }
    return 0;
}

