
#include<iostream>
using namespace std;
const int n =1e3;
     
        /*BRUTE FORCE APPROACH*/


/* int subarr(int arr[],int size,int key)
{
  int check=n;
  for(int i=0;i<size;i++)
  {
    
      for(int j=i;j<size;j++)
      {
           int sum=0;
           int count=0;
          for(int k=i;k<=j;k++)
          {
            sum+=arr[k];                       //  O(n^2)
          count++;
         
            if(sum>key)
         {
              check=min(check,count);
          } 
            
          }  
      
          // cout<<sum<<" "<<endl;   
      }
      
    
  }
  return check;
} */

int subarr(int arr[],int size,int key)
{
    int sum=0;
     int start=0,end=0;
     int ans=n;
     while(end<size){
         while(sum<=key && end<size)
         {
             sum+=arr[end++];

         }
         while(sum>key && start<size)             //O(n)
         {
             if(end-start<n)
             {
                 ans=end-start;
             }
             sum-=arr[start++];
         }
     }
     return ans;
   
}

int main()
{
int arr[]={1,4,45,6,10,9};
cout<<subarr(arr,6,51); 

}