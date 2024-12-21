#include <iostream>
using namespace std;
struct MyStack
{
   int *arr;
   int cap;
   int top;
   MyStack(int c)
   {
   cap=c;
   arr=new int[cap];
   top=-1;
    }
    void push(int x)
    {
        if (top==cap-1)
        {
            cout<<"Stack is Overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    
    int pop()
    {
        if (top==-1)
        {
            cout<<"Stack is Underflow"<<endl;
            return -1;
        }
        int res=arr[top];
        top--;
        return res;
    }
    
    int peek()
    {
        if (top==-1)
        {
            cout<<"Stack is Underflow"<<endl;
            return -1;
        }
        return arr[top];
    }
    int size()
    {
        return(top+1);
    }
    bool isEmpty()
    {
        return (top == -1);
    }
};

int main()
{
    MyStack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    
    float sum = 0;
    int count = 0;
    
    while (!s.isEmpty())
    {
        sum +=s.peek();
        s.pop();
        count++;
    }
    if (count != 0)
    {
        float avg=sum/count;
        cout<<"Average: "<<avg<<endl;
    }
    else
    {
        cout<<"The stack is empty."<<endl;
    }
    return 0;
}
