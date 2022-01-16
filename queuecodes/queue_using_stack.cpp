#include<iostream>

#include<stack>
using namespace std;
class questack
{

 stack<int> st1;
stack<int> st2;
 public:


void push(int x)
{
     if(!st1.empty() && !st2.empty())
     {
         cout<<"stack is full"<<endl;
         
     }
    
    st1.push(x);
}
 int pop()
{
   if(st1.empty() && st2.empty())  
   {
       cout<<"No more element can be added"<<endl;
       return -1;
   }
   if(st2.empty())
   {
       while(!st1.empty())
       {
        st2.push(st1.top());
        st1.pop();
       }
   }
   int topval=st2.top();
   st2.pop();
   return topval;

}

bool empty()
{
 if(st1.empty() && st2.empty())
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
    class questack qs;
   
    
      qs.push(2);
  
        qs.push(3);
        
     
        
    cout<<qs.pop()<<endl;
     qs.push(4);
          
     cout<<qs.pop()<<endl;
          
               
          
          
}

