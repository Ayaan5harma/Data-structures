#include<bits/stdc++.h>
using namespace std;
                         //MAX SUBARRAY SUM//
int kadenalgo(int arr[],int size)
{
    int currsum=0,maxsum=0;
    for(int i=0;i<size;i++)
    {
        currsum+=arr[i];
        maxsum=max(currsum,maxsum);
        if(currsum<0)
        {
            currsum=0;
        }
    }
    return maxsum;
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
 cout<<kadenalgo(arr,n); 
}