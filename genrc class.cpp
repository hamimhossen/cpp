#include<iostream>
using namespace std;
template<typename T>
class student
{
private:
    T value;
public:
    void setvalue(T v)
    {
        value=v;
    }
    T getvalue()
    {
        return value;
    }
};
int main()
{
    student<int>ob;
    ob.setvalue(100);
    cout<<ob.getvalue()<<endl;

    student<string>obj;
    obj.setvalue("Hamim");
    cout<<obj.getvalue()<<endl;
    return 0;
}

