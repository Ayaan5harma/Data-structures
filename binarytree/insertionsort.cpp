#include<iostream>
using namespace std;
 void insertionsort(int arr[],int size)
 {
     for(int i=1;i<size;i++)
     {
         int j=i-1;
         int current =arr[i];
         while(arr[j]>current &&j>=0)
         {
            arr[j+1]=arr[j];
            j--;
         }
         arr[j+1]=current;
     }
     for(int i=0;i<size;i++)
     {
         cout<<arr[i]<<" ";
     }
 }
 int main()
 {
     int arr[5]={7,4,2,8,1};
     insertionsort(arr,5);
 }