#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter any name:";
    gets(str);
    int i,vowel=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            vowel++;
        }
    }
    cout<<"The number of vowel:"<<vowel<<endl;
    return 0;
}

