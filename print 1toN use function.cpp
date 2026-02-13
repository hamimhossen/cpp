#include<iostream>
using namespace std;
void num(int n)
{
    for(int i=1; i<=n; i++)
    {
        cout<<i;
        if(i<n)
        {
            cout<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    num(n);
    return 0;
}
