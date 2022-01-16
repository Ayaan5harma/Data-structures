#include<bits/stdc++.h>
using namespace std;

void swap(int arr[], int i ,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int partition(int arr[],int left ,int right)
{
   
    int i=left-1;
     int pivot =arr[right];
    for(int j=left;j<right;j++)
    {
if(arr[j]<pivot)
{ 
    i++;
    swap(arr , i ,j);
}
    }
    swap(arr ,i+1 ,right);
    return i+1;
}
void quicksort(int arr[],int left ,int right)
{
  int piv;
   if (left<right)
   {
    piv =partition(arr, left , right);
   

    quicksort(arr ,left , piv-1);
    quicksort(arr, piv+1,right);
   }
}
int main()
{
    int arr[7]={2,4,5,3,6,8,7};
    quicksort(arr,0,6);
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}