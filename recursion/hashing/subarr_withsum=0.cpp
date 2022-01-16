#include<iostream>
#include<map>
#include<vector>
#include<unordered_map>
using namespace std;


int main(){
    int arr[]={10,15,-5,15,-10,5};
    
   int temp[6];
    int size=6;
    int count=0;
    int checksum=5;
    int commulativesum=0;
    map<int,int> mp;
    for(int i=0;i<size;i++){

     commulativesum+=arr[i]; 
    /*  temp[i]=commulativesum;
     if(commulativesum==checksum){
         count++;
     }
     for(int j=0;j<size;j++)
     {
     if(commulativesum-checksum==temp[j])
     {
         count++;
     }
    } */
    if(commulativesum==checksum){
        count++;
    }
    if(mp.find(commulativesum-checksum)!=mp.end())
    count+=mp[commulativesum-checksum];
    mp[commulativesum]++;
    
    


    //Brute force approach 
 /*    int count=0;
    for(int i=0;i<size;i++){
           int sum=0;
     for(int j=i;j<size;j++){
        sum+=arr[j];
        if(sum==5){
             count++;
         }
        }
     } */
    }
    cout<<count<<endl;

}