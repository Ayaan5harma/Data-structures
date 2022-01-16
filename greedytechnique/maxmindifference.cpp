#include<iostream>
#include<queue>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  
  int size=4;
  vector<int> arr={12,-3,10,0};
  sort(arr.begin(),arr.end());
int  maxvalue=0;
int minvalue=0;

for(int i=0;i<size/2;i++){
    maxvalue+=arr[size/2+i]-arr[i];
}
cout<<maxvalue;
for(int i=0;i<size;i++){
    minvalue+=arr[i+1]-arr[i];
    i++;
}
cout<<minvalue;





}