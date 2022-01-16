#include<iostream>
using namespace std;
int main()
{  
    int size =5;
    int arr[size]={-8,2,3,-6,10};
    int k;
    cout<<"size of subarray"<<endl;
    cin>>k;
    for(int i=0;i<5;i++)
    {
      for(int j=i;j<k;j++)
      {
          if(arr[i]<0)
          {
              cout<<arr[i]<<" ";
          }
          else{
              cout<<"0"<<" ";
          }
          
      }
      k++;
    }

}