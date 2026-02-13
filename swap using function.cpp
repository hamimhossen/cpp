#include<iostream>
using namespace std;
void num(int x,int y)
{
    int temp=x;
    x=y;
    y=temp;
    cout<<x<<" "<<y<<endl;
}
int main()
{
    int x,y;
    cin>>x>>y;
    num(x,y);
    return 0;
}

