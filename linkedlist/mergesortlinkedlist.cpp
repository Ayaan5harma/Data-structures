#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
    node *prev;
};
void insert(node *head,int data)
{
    node *temp=new node();
    temp->data=data;
    temp->next=NULL;
    temp->prev=NULL;
    if(!head)
    {
        head=temp;
    }
    else{
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
   
}
node *mergebothlist(node *first,node *second)
{
    node *answer=NULL;
    if(!first)
    {
        return second;
    }
    else if(!second)
    {
        return first;
    }
    if(first->data<second->data)
    {
        answer=first;
        answer->next=mergebothlist(first->next,second);
    }
    else{
        answer=second;
        answer->next=mergebothlist(first,second->next);
    }
    return answer;
}
void findmiddle(node *head,node *first,node *second)
{
      node *slow=head;
        node *fast=head->next;
        while(fast!=NULL)
        {
            
            fast=fast->next;
            if(fast!=NULL)
            {
                slow=slow->next;
                fast=fast->next;
            }
        }
first=head;
second=slow->next;
slow->next=NULL;
}
void mergesorting(node *head)
{
node *current=head;
node *first;
node *second;
if(!current || current->next==NULL)
{
    return ;
}
findmiddle(current,first,second);
mergesorting(first);
mergesorting(second);
head=mergebothlist(first,second);
}
node * mergesort(node *head)
{
  mergesorting(head);
  return head;
    

}
void printlist(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    
}
int main()
{
    node *head=NULL;
    insert(head,3);
     insert(head,8);
      insert(head,6);
       insert(head,2);
        insert(head,10);
        mergesort(head);
        printlist(head);

}