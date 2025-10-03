#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    char ch;
    int pos=-1;
    cout<<"Enter any name:";
    cin.getline(str,100);
    cout<<"Enter the character:";
    cin>>ch;
    int n=strlen(str);
    for(int i=0;i<n;i++)
    {
        if(str[i]==ch)
        {
            pos=i;
            break;
        }
    }
    if(pos==-1)
    {
        cout<<"Character is not found"<<endl;
    }
    else
    {
        cout<<"Character is found at "<<pos<<" position"<<endl;
    }
    return 0;

}

