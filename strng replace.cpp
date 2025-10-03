#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter any name:";
    gets(str);
    int i,len=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='A' || str[i]=='a')
        {
            str[i]='b';
        }
    }
    cout<<str<<endl;
    return 0;
}

