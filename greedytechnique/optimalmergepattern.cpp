#include<iostream>
#include<queue>
#include<vector>
#include<map>
using namespace std;
int main(){
   vector<int> arr={5,2,4,7};
int size=arr.size();
    priority_queue<int,vector<int>, greater<int>>pqmin;

    for(int i=0;i<size;i++){
       pqmin.push(arr[i]);
    }
    int count=0;
    while(pqmin.size()>1){
       int firsttop=pqmin.top();
       pqmin.pop();
       int secondtop=pqmin.top();
       pqmin.pop();

       int temp=firsttop+secondtop;
       count+=temp;

   pqmin.push(temp);
    }
    cout<<count;
 
}