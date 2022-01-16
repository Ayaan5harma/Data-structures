#include<iostream>
using namespace std;
int firstocc (int arr[],int n,int i,int size)
{
    if(i==size)
    {
    return -1;
    }
if(arr[i]==n)
{
 return i;

}
 int found=firstocc(arr,n,i+1,size);
 return found;
    
}
int lastocc(int arr[],int n,int i,int size)
{
    if(i<0)
    {
        return -1;
    }
    if(arr[i]==n)
    {
        return i;
    }
    int found =lastocc(arr,n,i-1,size);
    return found;
}
int main()
{
    int arr[]={4,2,1,2,5,7};
cout<<firstocc(arr,9,0,7)<<endl;
cout<<lastocc(arr,9,6,7);
}