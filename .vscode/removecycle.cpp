#include<iostream>
using namespace std;
struct list
{
  int data;
  struct list *next;
};
void makecycle(list *head,int pos)
{
list *temp=head;
int count =1;
list *start;
while(temp->next!=NULL)
{
    if(count==pos)
    {
     start=temp;
    }
    temp=temp->next;
    count++;
}
temp->next=start;
}
bool checkcycle(list *head)
{
    list *slow=head;
    list *fast=head;
  
    while(fast!=NULL &&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            return true;
       
        }
    }
return false;
    }
    

void remove_cycle(list *head)
{
    list *slow=head;
    list *fast =head;
    do
    {
    
    slow=slow->next;
    fast=fast->next->next;

    }while(slow!=fast);
    fast =head;
    while(fast->next!=slow->next)
    {
        head=head->next;
        slow=slow->next;

    }
    slow->next=NULL;
    
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


makecycle(head,2);
cout<<checkcycle(head)<<endl;
remove_cycle(head);
cout<<checkcycle(head)<<endl;
}

