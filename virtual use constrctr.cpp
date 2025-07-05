#include<iostream>
using namespace std;
class building
{
public:
    string address;
    building(string add)
    {
        address=add;
    }
    void showaddress()
    {
        cout<<"Address:"<<address<<endl;
    }
};
class room:virtual public building
{
public:
    int roomnumber;
    room(int rm,string add):building(add)
    {
        roomnumber=rm;
    }
    void showroom()
    {
        cout<<"Room number:"<<roomnumber<<endl;
    }
};
class door:virtual public building
{
public:
    string doortype;
    door(string dr,string add):building(add)
    {
        doortype=dr;
    }
    void showdoor()
    {
        cout<<"Door type:"<<doortype<<endl;
    }
};
class smartroom:public room,public door
{
public:
    smartroom(string add,int rm,string dr):building(add),room(rm,add),door(dr,add){
    }
    void showsmartroom()
    {
        showaddress();
        showroom();
        showdoor();
    }

};
int main()
{
    smartroom obj("Dhaka",504,"greenglass");
    obj.showsmartroom();
    return 0;
}

