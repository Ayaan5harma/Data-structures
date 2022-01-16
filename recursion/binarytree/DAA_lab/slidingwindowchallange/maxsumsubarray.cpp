#include<iostream>
using namespace std;
void maxsubarr(int arr[],int size,int x,int k)
{
  
   int maxans=0,currsum=0;
 for(int i=0;i<k;i++)
 {
     currsum+=arr[i];
 }
 if(currsum<x)
 {
     maxans=currsum;
 }
 for(int i=k;i<size;i++)
 {
     currsum=currsum-arr[i-k];
     currsum=currsum+arr[i];
     if(currsum<x)
     {
         maxans=max(currsum,maxans);
     }
 }
 cout<<maxans<<endl;
}
int main()
{
 int arr[]={4,2,6,3,5};
 maxsubarr(arr,6,11,2);
}