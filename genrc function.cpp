#include<iostream>
using namespace std;
template<typename T>
T add(T a,T b)
{
    return a+b;
}
int main()
{
    cout<<add(5,3)<<endl;
    cout<<add(2.5,1.7)<<endl;
    cout<<add(2.33,1.55);
    return 0;
}

