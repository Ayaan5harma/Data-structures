#include<iostream>
#include<queue>
using namespace std;

// Brute force approach
void insertionsort(int temp1arr[]){
   for(int i=1;i<9;i++)
    {
       int j= i-1;
       int current= temp1arr[i];
       while(temp1arr[j]>current && j>=0)
       {
           temp1arr[j+1]=temp1arr[j];
           j--;
       }
       temp1arr[j+1]= current;

    }
  for(int i=0;i<9;i++){
      cout<<temp1arr[i]<<" ";
  }
}
 void mergearrays(int arr1[],int arr2[],int arr3[]){
    int temp1arr[9];
    for(int i=0;i<3;i++)
    {
        temp1arr[i]=arr1[i];
    }
    int j=3;
     for(int l=0;l<3 && j<6;l++ )
    {
        temp1arr[j]=arr2[l];
        j++;
    }
    int k=6;
     for(int m=0;m<3 && k<9;m++ )
    {
        temp1arr[k]=arr3[m];
        k++;
    }
     for(int i=0;i<9;i++){
      cout<<temp1arr[i]<<" ";
  }
  cout<<endl;
 
 insertionsort(temp1arr);

 }
int main()
{
    int arr1[]={3,4,6};
    int arr2[]={2,5,9};
    int arr3[]={4,7,10};
    mergearrays(arr1,arr2,arr3);

}