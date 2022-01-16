#include<iostream>
using namespace std;
struct list
{
  int data;
  struct list *next;
};
struct list *append_k_nodes(list *head,int k)
{
    int count =1,l=4;
    
    list *tail=head;
    list *newhead;
    list *newtail;
   
    
    while(tail->next!=NULL)
    {
       if(count==l-k)
       {
           newtail=tail;
          
       }
       if(count==l-k+1)
       {
           newhead=tail;
       }
    
       tail=tail->next;
        count++;
    }
    newtail->next=NULL;
    tail->next=head;
    return newhead;

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

list *newhead=append_k_nodes(head,2);
display(newhead);

}

