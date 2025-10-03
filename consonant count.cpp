#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter any name:";
    gets(str);
    int i,consonant=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(!(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'))
        {
            consonant++;
        }
    }
    cout<<"The number of consonant:"<<consonant<<endl;
    return 0;
}

