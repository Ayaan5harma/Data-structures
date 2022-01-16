#include<iostream>
using namespace std;
struct list
{
  int data;
  struct list *next;
};
struct list *reverse(list *head)   //iteration method
{
    list *prev=NULL;
    list *current=head;
    list *nextptr;
   
   while(current!=NULL)
    {
       nextptr=current->next;
       current->next=prev;
       prev=current;
       current=nextptr;
    } 
return prev;
}
struct list *reverserecursive(list *head)   //recursive method
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    list *newhead=reverserecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
struct list *display(list *ptr)
{
while(ptr!=NULL)
{
    cout<<ptr->data<<endl;
    ptr=ptr->next;
}
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

 list *newhead=reverserecursive(head);
 display(newhead);





}