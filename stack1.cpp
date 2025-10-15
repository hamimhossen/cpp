#include<iostream>
#define N 5
using namespace std;
int stack_arr[N];
int top=-1;
void push()
{
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    if(top==N-1)
    {
        cout<<"Stack overflow, Cannot push"<<endl;
    }
    else
    {
        top++;
        stack_arr[top]=x;
    }
}
void pop()
{
    if(top==-1)
    {
        cout<<"Underflow"<<endl;
    }
    else
    {
        int item=stack_arr[top];
        cout<<item<<" popped from stack"<<endl;
        top=top-1;
    }
}
void peek()
{
    cout<<"Top element is: "<<stack_arr[top]<<endl;
}
void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        cout<<stack_arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int ch;
    do{
        cout<<"Enter Choice: 1.push 2.pop 3.peek 4.display"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: peek();
            break;
            case 4: display();
            break;
            default:
                cout<<"Choice is Invalid"<<endl;
        }
    }
    while(ch!=0);
    return 0;
}

