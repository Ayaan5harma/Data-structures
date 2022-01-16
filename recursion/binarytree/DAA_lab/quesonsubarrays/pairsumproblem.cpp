#include<iostream>
using namespace std;

//brute force approach

/* bool pairsumproblem(int arr[],int size,int key)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]+arr[j]==key)
            {
               cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    return false;
} */


//optimize approach (can be use only on sorted array)
 bool pairsumproblem(int arr[],int size,int key)
 {
     int start=0;
     int end=size-1;
     while(start!=end)
     {
       if(arr[start]+arr[end]==key)
       {
          cout<<start<<" "<<end<<endl;
           return true;
       }
       else if (arr[start]+arr[end]>key)
       {
           end--;
       }
       else if(arr[start]+arr[end]<key)
       {
           start++;
       }
       
       
     }
     return false;
 }

int main()
{
int arr[]={2,4,7,11,14,16,20,21};
cout<<pairsumproblem(arr,8,31);
}