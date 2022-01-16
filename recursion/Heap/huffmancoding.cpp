#include<iostream>
#include<map>                    // (char, freq) -> hash map
#include<queue>                 //   (two min elements) -> minheap
#include<string>               //  (structure of code) -> tree
#include<vector>              // (char,code) -> hashmap
using namespace std;
struct minHnode{
    int freq;
    char item;
    minHnode *left ,*right;
};
struct minH{
int size;
int capacity;
minHnode *
};
int main(){
    string str;
    cin>>str;

    map<int,int> mp;
     priority_queue<int,vector<int>> pqmin;
    for(int i=0;i<str.size();i++)
    {
        mp[str[i]]++;
    }

    map<int,int> :: iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
        pqmin.push(it->second);
    }

   
}