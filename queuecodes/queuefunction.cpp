#include<iostream>
using namespace std;
class queue{
    int *arr;
    int front=-1 ;
    int back=-1;
    int n=10;
    public:
    queue()
    {
        arr=new int[n];
    }
    void enqueue(int x)
    {
       
        if(back==n-1)
        {
            cout<<"queue is already full"<<endl;
        }
        else{
        back++;
        arr[back]=x;
        }
        if(front==-1)
        {
            front++;
        }
    }
    void dequeue()
    {
        if(front==-1 || front>back)
        {
            cout<<"queue is already empty"<<endl;
            
        }
        
    
        front++;
        
    
    }
    void peek()
    {
       if(front==-1 ||front>back)
        {
            cout<<"queue is already empty"<<endl;

        }
        else{
       cout<<arr[front]<<endl;
    }
    }
    bool empty()
{
    if(front==-1 ||front>back)
    {
    cout<<"queue is empty";
     return true;
    }
    else{
        cout<<"queue is not empty";
        return false;
    }

}   
};
int main()
{
    queue p;
   p.enqueue(3);
    p.enqueue(3);
    
    p.dequeue();
    cout<<p.empty()<<endl;
    p.dequeue();
    cout<<p.empty();
  
  
     




}