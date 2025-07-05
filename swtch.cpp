#include<iostream>
using namespace std;
int main()
{
    char J;
    cout<<"Enter any letter:";
    cin>>J;
    switch(J)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout<<"Vowel"<<endl;
        break;

    default:
        cout<<"Consonant"<<endl;
    }
    return 0;
}
