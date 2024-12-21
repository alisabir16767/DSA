#include<iostream>
using namespace std;
struct Node{
int data;
Node *next;
Node(int x){
   data=x;
   next=NULL;
}
};
Node *insertBegin(Node *head,int x){
   Node *temp=new Node(x);
   temp->next=head;
   return temp;
}
Node *insertEnd(Node *head,int x){
   Node *temp=new Node(x);
   if(head==NULL)
   return temp;
   Node *curr=head;
   while(curr!=NULL)
   curr=curr->next;
  curr->next=temp;
  return head;
}
void printList(Node *head){
   Node *curr=head;
   while(curr!=NULL){
      cout<<curr->data<<"\t";
    curr=curr->next;
   }
}
int main(){
   Node *head=NULL;
   head=insertBegin(head,30);
   head=insertBegin(head,80);
   head=insertBegin(head,70);
   head=insertEnd(head,100);
   head=insertEnd(head,555);
   printList(head);
   return 0;
}