#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
int rainwater(vector<int> arr)
{
  stack<int> st;
  int n=arr.size(),ans=0,curr;
  for(int i=0;i<n;i++)
  {
    while(!st.empty() && arr[st.top()]<arr[i])
    {
         curr=st.top();
        st.pop();
    
    if(st.empty())
    {
        break;
    }
    int diff=i-st.top()-1;
    ans+=(min(arr[st.top()],arr[i])-arr[curr])*diff;
  }
  st.push(i);
  }
  return ans;
}
int main()
{
vector<int> arr={0,1,0,2,1,0,1,3,2,1,2,1};
cout<<rainwater(arr);





}