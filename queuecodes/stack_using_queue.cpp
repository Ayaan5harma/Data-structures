#include<bits/stdc++.h>
using namespace std;
class Stack
{
    int N;
 queue<int> q1;
 queue<int> q2;
 public:
  Stack()
  {
       N=0;
  }

/* void push(int x)          //using push case costly//
{
q2.push(x);
N++;
while(!q1.empty())
{
    q2.push(q1.front());
    q1.pop();
}
queue<int> temp;
temp=q1;
q1=q2;
q2=temp;
} */
/* void pop()
{
q1.pop();
N--;

} */
void push(int x)
{
    q1.push(x);
    N++;
}
void pop()
{
    while(q1.size()!=1)
    {
       q2.push(q1.front());
       q1.pop();
    }
    q1.pop();
    N--;
    queue<int> temp =q1;
    q1=q2;
    q2=temp;
}
void top()
{
    while(q1.size()!=1)
    {
        q2.push(q1.front());
        q1.pop();
    }
    int val=q1.front();
cout<<q1.front()<<endl;
q2.push(val);
  queue<int> temp =q1;
    q1=q2;
    q2=temp;
}
bool empty()
{
    if(q1.empty() && q2.empty())
    {
        return true;
    }
    return false;
}
};
int main()
{
Stack st;
st.push(1);
st.push(2);
st.top();
st.pop();
cout<<st.empty()<<endl;
st.top();
st.pop();
cout<<st.empty()<<endl;


return 0;
}