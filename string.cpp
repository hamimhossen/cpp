#include<iostream>
using namespace std;
int main()
{
    char str[100];
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='D' || str[i]=='d')
        {
            str[i]='b';
        }
    }
    cout<<str;
    return 0;
}

