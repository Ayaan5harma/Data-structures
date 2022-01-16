#include<iostream>
using namespace std;
struct list
{
  int data;
  struct list *next;
};
int length(list *ptr)
{
    int l=0;
    while(ptr!=NULL)
    {
        ptr=ptr->next;
        l++;
    }
    return l;
}
 struct list  *merge_linkedlist(list *head,list *one)
 {
int l1=length(head);
int l2=length(one);
list *dummynode=new list();
list *ptr=dummynode;


    while(head!=NULL && one!=NULL )
    {
        if(head->data > one->data)
        {
            ptr->next=one;
            one=one->next;
           
        }
        else{
          ptr->next=head;
            head=head->next;
             
        }
        ptr=ptr->next;
       
    }
    while(head!=NULL)
    {
        ptr->next=head;
        head=head->next;
        ptr=ptr->next;
    }
    while(one!=NULL)
    {
        ptr->next=one;
        one=one->next;
        ptr=ptr->next;
    }

return dummynode->next;

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
fifth->next=NULL;
one->data=1;
one->next=two;
two->data=2;
two->next=three;
three->data=8;
three->next=four;
four->data=12;
four->next=NULL;
display(head);
display(one);
list *newhead=merge_linkedlist(head,one);
display(newhead);






}

