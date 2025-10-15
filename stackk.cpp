#include<iostream>
using namespace std;

int stackarr[5];
int top = -1;

int isEmpty(){
    if(top == -1)
        return 1;
    else
        return 0;
}
int isFull(){
    if(top == 5-1)
        return 1;
    else
        return 0;
}
void push(int value){
    if(isFull())
    {
        cout<<"Stack overflow, cannot push "<<value<<endl;
    }
    else
    {
        top=top+1;
        stackarr[top]=value;
        cout<<value <<" pushed into stack"<<endl;
    }
}
void pop(){
    if(isEmpty())
    {
        cout<<"Stack Underflow, Nothing to pop"<<endl;
    }
    else
    {
        cout<<stackarr[top]<<" popped from stack"<<endl;
        top=top-1;
    }
}
void Top(){
    if(isEmpty())
    {
        cout<<"Stack is Empty"<<endl;
    }
    else
    {
        cout<<"Top element is: "<<stackarr[top]<<endl;
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    Top();
    pop();
    Top();
    push(40);
    push(50);
    push(60);
    pop();
    pop();
    pop();
    pop();
    return 0;
}
