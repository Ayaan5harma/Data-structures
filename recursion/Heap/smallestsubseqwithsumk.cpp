#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int arr[]={1,3,2,8,1};
    int size=5;
    int count=0,sum=0;
    priority_queue<int,vector<int>> pqmax;
    for(int i=0;i<size;i++){
        pqmax.push(arr[i]);
    }
     for(int i=0;i<size;i++){

       if(sum>=num)
       {
           cout<<count;
           return 0;
       }  
       sum+=pqmax.top();
       pqmax.pop();
       count++;  

     }
}