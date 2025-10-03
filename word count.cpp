#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter any name:";
    gets(str);
    int i,word=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            word++;
        }
    }
    cout<<"The number of word:"<<word<<endl;
    return 0;
}

