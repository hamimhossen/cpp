#include<iostream>
using namespace std;
class Distance
{
private:
    int meter;
public:
    Distance()
    {
        meter=0;
    }
    Distance(int m)
    {
        meter=m;
    }
    Distance operator++()
    {
        ++meter;
        return *this;
    }
    Distance operator++(int)
    {
        meter++;
        return *this;
    }
    Distance operator--()
    {
        --meter;
        return *this;
    }
    Distance operator--(int)
    {
        meter--;
        return *this;
    }
    void display()
    {
        cout<<"Distance: "<< meter<<" Meters"<<endl;
    }
};
int main()
{
    Distance d(15);
    cout<<"Initial ";
    d.display();
    ++d;
    cout<<"After prefix ++";
    d.display();
    d++;
    cout<<"After postfix ++";
    d.display();

    --d;
    cout<<"After prefix --";
    d.display();
    d--;
    cout<<"After postfix --";
    d.display();
    return 0;
}

