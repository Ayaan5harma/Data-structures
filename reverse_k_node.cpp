#include<iostream>
using namespace std;
struct list
{
  int data;
  struct list *next;
};
struct list *reverse_k_node(int k,list *head)
{
list *prev=NULL;
 list *current=head;
 list *nextptr;
 int count =0;
 while(current!=NULL &&count<k)
 {
   nextptr=current->next;
   current->next=prev;
   prev=current;
   current=nextptr;
   count++;
 }
 if(nextptr!=NULL ){
 head->next=reverse_k_node(k,nextptr);
}
 return prev;
}
struct list *display(list *ptr)
{
  while(ptr!=NULL){
  cout<<ptr->data<<endl;
  ptr=ptr->next;}
  return ptr;
}
int main()
{
list *head,*second,*third,*fourth;
head=new list();
second=new list();
third=new list();
fourth=new list();

head->data=3;
head->next=second;
second->data=4;
second->next=third;
third->data=5;
third->next=fourth;
fourth->data=6;
fourth->next=NULL;
int k=2;
list *newnode=reverse_k_node(k,head);
display(newnode);

}