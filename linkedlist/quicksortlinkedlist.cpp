#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *prev;
    Node *next;
};
void insert(Node *head,int data)
{
    Node *temp=new Node();
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
partition(Node *head,Node *left,Node *right)
{
    
}
 void quicksortlist(Node *head)
{
Node *current=head;
if(!current || current->next==NULL)
{
    return ;
}
if(left!=right)
{
    Node *pivot=partition(head,left,right);
    quick
}

}


int main()
{
    
}