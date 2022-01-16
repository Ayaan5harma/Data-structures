#include<iostream>
using namespace std;
void windowmax(int arr[],int key,int size)
{   
     int j=0;
    while( j<size-2)
    {
    int max=arr[0];
    for(int i=j;i<key;i++)
    {
          if(max<arr[i])
          {
              max=arr[i];
          }
    }
    cout<<max<<" ";
    key++;
    j++;
    }
     
}

int main()
{
    int size =8;
int arr[size]={1,3,-1,-3,5,3,6,7};
windowmax(arr,3,size);
}