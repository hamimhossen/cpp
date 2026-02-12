#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int x,y;
        cin>>x>>y;
        int sum=0;
        if(x > y)
        {
            int temp=x;
            x=y;
            y=temp;
        }
        for(int i=x+1; i<y; i++)
        {
            if(i % 2!= 0)
            {
                sum=sum+i;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
