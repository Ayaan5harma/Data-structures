#include<bits/stdc++.h>
using namespace std;

void selectiosort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++ )
        {
            
            if(arr[i]>arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;

            }

        }
    }
}

int main()
{
 int size=5;
 int arr[size]= {5,3,9,2,6};
 selectiosort(arr,5);
 for(int i=0;i<size;i++)
 {
     cout<<arr[i]<<" ";
 }
}