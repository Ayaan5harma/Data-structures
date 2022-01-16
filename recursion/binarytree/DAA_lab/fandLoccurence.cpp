#include<iostream>
using namespace std;
int Foccurence(int arr[],int size,int x,int i)
{

if(i==size)
{
    return -1;
}

if(arr[i]==x )
{

   return i;
}
else{
 return Foccurence(arr,size,x,i+1);
}
}
int Loccurence(int arr[],int size,int x,int i)
{

if(i==size)
{
    return -1;
}

if(arr[i]==x )
{

   return i;
}
else{
 return Loccurence(arr,size,x,i-1);
}
}
int main()
{
  int size=7;
  int arr[]={4,2,1,2,5,2,7};
  int i= size-1;
  cout<<Loccurence( arr,7, 2, i);

}