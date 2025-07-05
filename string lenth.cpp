#include<iostream>
using namespace std;
int main()
{
    char str[100];
    gets(str);
    int i,len=0;
    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }
    cout<<len<<endl;
    return 0;
}

