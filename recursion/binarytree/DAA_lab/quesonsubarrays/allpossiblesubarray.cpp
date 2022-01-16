#include<iostream>
using namespace std;
const int n =1e3;
void subarr(int arr[],int size)
{
  int check=n;
  for(int i=0;i<size;i++)
  {
    
      for(int j=i;j<size;j++)
      {
           //int sum=0;
           //int count=0;
          for(int k=i;k<=j;k++)
          {
          //  sum+=arr[k];
          //count++;
            cout<<arr[k]<<" ";
          //  if(sum>x)
        /*   {
              check=min(check,count);
          } */
            
          }  
        cout<<endl;
          // cout<<sum<<" "<<endl;   
      }
      
    
  }
}
/* 
void subarr(int arr[],int start,int end)
{
    if(end==sizeof(arr)/sizeof(arr[0]))
    {
        return;
    }
    else if(start>end)
    {
        subarr(arr,0,end+1);
    }
    else{
        for(int i=start;i<end;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<arr[end]<<endl;
        subarr(arr,start+1,end);
    }
} */
int main()
{
int arr[]={-1,4,7,2};
subarr(arr,4); 
//subarr(arr,0,0);
}