#include<iostream>
using namespace std;
struct list
{
  int data;
  struct list *next;
};
void intersection(list *head,list *one,int pos)
{
    list *temp1=head;
    list *temp2=one;
    pos--;
    while(pos--)
    {
        temp1=temp1->next;
    }
while(temp2->next!=NULL)
{
    temp2=temp2->next;

}
temp2->next=temp1;
}

int find_intersection(list *head,list *one)
 {
     int l=5,k=4,count=0;


     list *head1;
     list *head2;
     if(l>k)
     { count =l-k;
         head1=one;
         head2=head;
     }
     else{
         count=k-l;
         head2=one;
         head1=head;
     }
     
     while(count)
     {
         head1=head1->next;
         count--;
     }
     while(head1!=NULL && head2!=NULL)
     {
         if(head1==head2)
         {
             return head1->data;
         }
        head2=head2->next;
         head1=head1->next;
     }
     return -1;
    
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
three->data=21;
three->next=four;
four->data=22;
four->next=NULL;

intersection(head,one,4);
find_intersection(head,one);



}

