#include<bits/stdc++.h>
using namespace std;
 void merge(int arr[],int left ,int mid, int right)
 {
     int n1=mid-left+1;
     int n2=right-mid;
      
      int arr1[n1];
      int arr2[n2];
      for(int i=0;i<n1;i++)
      {
          arr1[i]=arr[left+i];
      }
      for(int j=0;j<n2;j++)
      {
        arr2[j]=arr[mid+1+j];
      }

 int i=0;
 int j=0;
 int k=left;
  while(i<n1 && j<n2)
 {
     if(arr1[i]<arr2[j])
     {
         arr[k]=arr1[i];
         
         i++;
         
     }
     else
     {
     	arr[k]=arr2[j];
     	
     	j++;
         
	 }
     k++;
 }
 while(i<n1)
 {
      arr[k]=arr1[i];
        
         i++;
          k++;
 }
 while(j<n2)
 {
      arr[k]=arr2[i];
         
         j++;
         k++;
 }

 }
 void mergesort(int arr[],int left ,int right)
 {
     
     if(left<right)
     { 
         int mid =(left+right)/2;
         mergesort(arr,left,mid);
         mergesort(arr,mid+1,right);

        merge(arr,left,mid,right);
     }
 }
 int main()
 {
     int arr[]={13,11,12,56,9,8,77,6};
     mergesort(arr,0,7);
     for(int i=0;i<8;i++)
     {
         cout<<arr[i]<<" ";
     }
 }