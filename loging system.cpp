#include<iostream>
#include<string>
using namespace std;
int main()
{
    string correctusername="Hamim";
    string correctpassword="910145";

    string username,password;
    cout<<"Enter username:";
    cin>>username;
    cout<<"Enter password:";
    cin>>password;

    if(username==correctusername && password==correctpassword)
    {
        cout<<"Login Successful"<<endl;
    }
    else
    {
        cout<<"Invalid username or password"<<endl;
    }
    return 0;
}

