#include<bits/stdc++.h>
using namespace std;
bool check(int arr[],int size)
{
  /*  if(size==0)
   {
       return true;
   }
   int i=size-1;
   int j=i-1;
   if(arr[j]>arr[i])
   {
 return check(arr+1,size-1);
   }
   else{
       return false;
   } */ 
   if(size==1)
   {
       return true;
   }

bool restarray = check(arr+1,size-1);

if(arr[0]<arr[1] && restarray)
{
    return true;
}
else
{
    return false;
}
  
   
   
   
}
int main()
{

  int arr[5]={1,10,3,4,5};
  cout<<check(arr,5);
 
}