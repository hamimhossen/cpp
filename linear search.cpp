#include<iostream>
using namespace std;
void insertbefore(int a[],int &n,int value,int beforevalue)
{
    int pos=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==beforevalue)
        {
            pos=i;
            break;
        }
    }
    if(pos==-1)
    {
        cout<<beforevalue<<" not found! cannot insert"<<endl;
        return;
    }
    for(int i=n;i>pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=value;
    n++;
}
void deletevalue(int a[],int &n,int value)
{
    int pos=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==value)
        {
            pos=i;
            break;
        }
    }
    if(pos==-1)
    {
       cout<<value<<" not found! cannot delete"<<endl;
       return;
    }
    for(int i=pos;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;
}
int linearsearch(int a[],int n,int target)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==target)
        {
            return i;
        }
    }
    return -1;
}
void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int a[100]={3,7,2,4,8,1,9};
    int n=7;
    insertbefore(a,n,5,2);
    deletevalue(a,n,1);
    insertbefore(a,n,6,1);

    cout << "Array after operations: ";
    printarray(a, n);

    int index = linearsearch(a, n, 8);
    if (index != -1)
        cout << "Element 8 found at index: " << index << endl;
    else
        cout << "Element 8 not found!" << endl;

    return 0;
}

