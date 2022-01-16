#include<iostream>
#include<vector>
using namespace std;

void Buildheap(vector<int> &arr,int curr,int size)
{
    int max=curr;
    int left=2*curr+1;
    int right=2*curr+2;
    if(left<arr.size() && arr[left]>arr[max])
    {
        max=left;
    }
    if(right<arr.size() && arr[right]>arr[max])
    {
        max=right;
    }
    if(max!=curr)
    {
        int temp=arr[curr];
        arr[curr]=arr[max];
        arr[max]=temp;
        Buildheap(arr,max,size);
    }
}
void heapsort(vector<int>& arr)
{
   int n=arr.size();
for(int i=arr.size()/2-1;i>=0;i--)
{
    Buildheap(arr,i,n);
}
for(int i=arr.size()-1;i>0;i--)
{
    int temp=arr[0];
    arr[0]=arr[i];
    arr[i]=temp;
    Buildheap(arr,0,i);
}
}
int main()
{
    
    vector<int> arr{9,6,8,2,1,4,3};

    
    heapsort(arr);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}