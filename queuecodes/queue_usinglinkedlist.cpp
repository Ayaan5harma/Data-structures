#include<iostream>
#include<queue>
using namespace std;
class node
{
  public:
    int data;
    node *next;
node(int val)
{
  data=val;
  next=NULL;
}

};
class que
{

  node *front;
  node *back;
  public:

  que()
  {
    front =NULL;
    back=NULL;
  }

void enqueue(int x)
{
  node* n= new node(x);
if(front ==NULL)
{
  front=n;
  back=n;
}
  back->next=n;
  back=back->next;
}
void dequeue( )
{

  if(front==NULL)
  {
    cout<<"stack is empty"<<endl;
    
  }
  else
  {
node  *ptr=front;
front=front->next;
delete(ptr);
  }

}
void peek()
{
  if(front==NULL )
  {
    cout<<"stack is empty";
  }
  else
  {
  cout<<front->data<<endl;
  }
}
bool empty()
{
  if(front==NULL)
  {
    return true;
  }
  else{
    return false;
  }
}


};
int main()
{
que Q;
Q.enqueue(1);
Q.enqueue(2);
Q.enqueue(3);
Q.peek();
Q.dequeue();
Q.dequeue();
Q.peek();
Q.dequeue();
Q.dequeue();
Q.dequeue();

}

