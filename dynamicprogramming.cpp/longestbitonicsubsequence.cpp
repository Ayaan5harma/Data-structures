#include<bits/stdc++.h>
using namespace std;
void lis(int arr[],int size)
{
    
    int forward[size];
 for(int i=0;i<size;i++)
 {
     forward[i]=1;
 for(int j=0;j<i;j++)
 {
     if(arr[i]>arr[j] )
     {
     forward[i]=max(forward[i],1+forward[j]);
     }
 }

 }


  int backward[size];
 for(int i=size-1;i>=0;i--)
 {
   backward[i]=1;
   for(int j=size-1;j>i;j--)
   {
     if(arr[i]>arr[j])  //i<j
     {
    backward[i]=max(backward[i],1+backward[j]);
     }
   }
 }
 int ans=0;
 for(int i=0;i<size;i++)
 {
   ans=max(ans,forward[i]+backward[i]-1);
 }
cout<<ans;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
  lis(arr,n);
}


/* 
8
1
11
2
10
4
5
2
1   
*/