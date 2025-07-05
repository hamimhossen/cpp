#include<iostream>
using namespace std;
class mobileuser
{
public:
    virtual void sendmessage()=0;
};
class rahim:public mobileuser
{
public:
    void sendmessage()
    {
        cout<<"Hi,this is rahim"<<endl;
    }
};
class karim:public mobileuser
{
public:
    void sendmessage()
    {
        cout<<"Hi,this is karim"<<endl;
    }
};
int main()
{
    mobileuser *m;
    rahim r;
    karim k;
    m=&r;
    m->sendmessage();
    m=&k;
    m->sendmessage();
    return 0;
}
