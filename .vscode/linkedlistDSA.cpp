#include<iostream>
using namespace std;
struct list
{
  int data;
  struct list *next;
};
 void even_after_odd(list* &head)
{
list *even=head->next;

list *odd=head ;

list *ptr=even;
while(even->next!=NULL && odd->next!=NULL)
{
    odd->next=even->next;
    odd=odd->next;
    even->next=odd->next;
    even=even->next;
}
odd->next=ptr;
if(odd->next!=NULL)
{
    even->next=NULL;
}


 
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
list *head,*second,*third,*fourth,*fifth,*one,*two,*three,*four;
head=new list();
second=new list();
third=new list();
fourth=new list();
fifth=new list();
one=new list();
two=new list();
three=new list();
four=new list();

head->data=3;
head->next=second;
second->data=4;
second->next=third;
third->data=5;
third->next=fourth;
fourth->data=6;
fourth->next=fifth;
fifth->data=7;
fifth->next=one;
one->data=1;
one->next=two;
two->data=2;
two->next=three;
three->data=21;
three->next=four;
four->data=22;
four->next=NULL;

even_after_odd(head);
display(head);






}

