#include<iostream>
using namespace std;
int main()
{
   char ch;
   cout<<"Enter any letter : ";
   cin>>ch;

   if(ch>='a' && ch<='z')
    cout<<"Small Letter"<<endl;

   else if(ch>='A' && ch<='Z')
    cout<<"Capital Letter"<<endl;

   else
    cout<<"Not a Letter"<<endl;

   return 0;
}

