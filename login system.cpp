#include<iostream>
#include<string>
using namespace std;

class Loginsystem
{
private:
    string correctusername="Hamim";
    string correctpassword="910145";
public:
    void login()
    {
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
    }
};
int main()
{
    Loginsystem loginApp;
    loginApp.login();
    return 0;
}

