#include<iostream>
using namespace std;
class Truck
{
public:
    int speed;
    int weight;
    int price;
    Truck(int s,int w,double p)
    {
        speed=s;
        weight=w;
        price=p;
    }
    double getregularprice()
    {
        return price;
    }
    double getsaleprice()
    {
        if(weight>=5000)
        {
            return price-1000;
        }
        else
        {
            return price;
        }
    }
};
int main()
{
    Truck obj(80,3100,9000);
    cout<<"Regular price :"<<obj.getregularprice()<<" Taka "<<endl;
    cout<<"Sale price :"<<obj.getsaleprice()<<" Taka "<<endl;
    return 0;
}
