#include <iostream>
using namespace std;
class Mystack{
   int arr[];
   int cap;
   int top;
   Mystack(int c){
      top=-1;
      cap=c;
      arr=new int[cap];
   }
   void push(int x){
      if(top==cap-1) cout<<"FULL"<<endl;
      top++;
      arr[top]=x;

   }
   int pop(){
      if(top==-1) cout<<"EMPTY"<<endl;
      int res=arr[top];
      top--;
      return res;
   }
   int size(){
      return top+1;

   }
   boolean isEmpty(){
      return (top==-1);
   }

}