#include<iostream>
#include<string>
using namespace std;

template<typename T>
class Loginsystem
{
private:
    T correctusername;
    T correctpassword;
public:
    Loginsystem(T username,T password)
    {
        correctusername=username;
        correctpassword=password;
    }
    void login()
    {
        T username,password;
        cout<<"Enter username:";
        cin>>username;
        cout<<"Enter password:";
        cin>>password;
        try{
            if(username!=correctusername || password!=correctpassword){
                throw "Invalid username or password";
            }
            cout<<"Login successful"<<endl;
        }
        catch(const char* errmsg){
            cout<<"Error:"<<errmsg<<endl;
        }
    }
};
int main()
{
    Loginsystem <string>obj("Hamim","910145");
    obj.login();
}

