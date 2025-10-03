#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100],p[100];
    cout<<"Enter the main text:";
    cin>>s;
    cout<<"Enter the pattern to search:";
    cin>>p;
    int Ls=strlen(s);
    int Lp=strlen(p);
    int Max=Ls-Lp+1;
    for(int i=0;i<Max;i++)
    {
        bool flag=true;
        for(int j=0;j<Lp && flag==true;j++)
        {
            if(p[j]!=s[i+j])
            {
                flag=false;
            }
        }
        if(flag==true)
        {
            cout<<"Pattern is found at index "<<i<<endl;
        }
    }
    return 0;
}


