#include <bits/stdc++.h>
using namespace std;
 
/* structure for a node */
struct Node {
public:
    int data;
    Node* next;
};
 
/* Function to insert a node at the beginning of
a Circular linked list */
void push(Node* head, int data)
{
    // Create a new node and make head as next
    // of it.
    Node* ptr1 = new Node();
    ptr1->data = data;
    ptr1->next = head;
 
    /* If linked list is not NULL then set the
    next of last node */
    if (head != NULL)
    {
        // Find the node before head and update
        // next of it.
        Node* temp = head;
        while (temp->next != head)
            temp = temp->next;
        temp->next = ptr1;
    }
    else
        ptr1->next = ptr1; /*For the first node */
 
    head = ptr1;
}
 
/* Function to print nodes in a given
circular linked list */
void printList(Node* head)
{
      while (head != NULL) 
      {
        
            cout << head->data << " ";
            head = head->next;
            
    cout << endl;
        } 
    }
 
void deleteNode(Node *head, int key)
{
   if(head==NULL && head->next==head)
   {
       free(head);
       head=NULL;
       return ;
   }
while(head->next!=NULL)
{
    if(head->next->data==key)
    {
        Node *temp=head->next;
        head->next=head->next->next;
        free(temp);
    }
 else if(head->next->data==key && head->next->next==head)
{
    Node *temp1=head->next;
    free(temp1);
    head->next=head;
    
}

  head=head->next;
}

}
 int main()
{
    /* Initialize lists as empty */
    Node* head = NULL;
 
    /* Created linked list will be 2->5->7->8->10 */
    push(head, 2);
    push(head, 5);
    push(head, 7);
    push(head, 8);
    push(head, 10);
 
    cout << "List Before Deletion: ";
    printList(head);
 
    deleteNode(head, 7);
 
    cout << "List After Deletion: ";
    printList(head);
 
    return 0;
}