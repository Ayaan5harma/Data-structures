#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
void kmostfrequentelement(int arr[],int size,int k){
  map<int,int> mp;
  map<int,int> :: iterator it;
  int presentsize=mp.size();   // number of elements in the map//

for(int i=0;i<size;i++){

  mp[arr[i]]++;
if( presentsize==k)
break;

}
for(it=mp.begin();it!=mp.end();it++){
  cout<<it->first<<" "<<it->second<<endl;
  if(it->second==k){
    break;
  }
}

}
int main()
{

    int arr[]={1,2,2,2,3,4};
    int size=6;
  int k=3;
    kmostfrequentelement(arr,size, k);

}