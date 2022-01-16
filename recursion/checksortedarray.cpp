#include<iostream>
using namespace std;
bool check(int arr[],int size)
{
if (size==1)
{
    return true;
}
bool restarray=check(arr+1,size-1);
return (arr[0]<arr[1]&& restarray);
}
int main()
{
   
 int arr[5]={2,12,6,8,9};
 cout<<check(arr,5);
 
}