#include<iostream>

#include<stack>
using namespace std;
class questack
{

 stack<int> st1;

 public:


void push(int x)
{
     
    
    st1.push(x);
}
 int pop()
{
   if(st1.empty())  
   {
       cout<<"No more element can be added"<<endl;
       return -1;
   }

   int x=st1.top();
   st1.pop();
   if(st1.empty())
   {
       return x;
   }

   int item=pop();
   st1.push(x);
   return item;


}

bool empty()
{
 if(st1.empty() )
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
    qs.push(1);
    
      qs.push(2);
  
        qs.push(3);
        
          qs.push(4);
        
    cout<<qs.pop()<<endl;
          
     cout<<qs.pop()<<endl;
          
     cout<<qs.pop()<<endl;          
          
            cout<<qs.empty()<<endl;
cout<<qs.pop()<<endl;           
            cout<<qs.empty()<<endl;          
}

