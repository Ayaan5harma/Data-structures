#include<bits/stdc++.h>
using namespace std;
 
// structure of node of doubly linked list
struct Node
{
    int data;
    struct Node *next, *prev;
};
 
// Function to find pair whose sum equal to given value x.
void pairSum(struct Node *head, int x)
{
  Node *first=head;
  Node *last=head;
  bool found=false;
while(last->next!=NULL)
  {
     last=last->next;
}
while(first!=last && last->next!=first)
{
    if(first->data+last->data==x)
    {
        found=true;
      cout<<first->data<<" "<<last->data;
      cout<<endl;
      first=first->next;
      last=last->prev;
    }
    else{
        if(first->data+last->data<x)
        {
            first=first->next;
        }
        else{
            last=last->prev;
        }
    }
}
if(found==false)
{
    cout<<"no pair found";
}
}

void insert(struct Node **head, int data)
{
    struct Node *temp = new Node;
    temp->data = data;
    temp->next = temp->prev = NULL;
    if (!(*head))
        (*head) = temp;
    else
    {
        temp->next = *head;
        (*head)->prev = temp;
        (*head) = temp;
    }
}
 
// Driver program
int main()
{
    struct Node *head = NULL;
    insert(&head, 8);
    insert(&head, 6);
    insert(&head, 4);
    insert(&head, 2);
    insert(&head, 1);
  
    int x = 10;
 
    pairSum(head, x);
 
    return 0;
}