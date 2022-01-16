#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector <int>v;
v.push_back(1);
v.push_back(5);
v.push_back(9);
v.push_back(3);
v.push_back(2);
for(int i=0;i<v.size();i++)
{
    cout<<v[i];
}



vector<int>:: iterator it;
for(it=v.begin();it!=v.end();it++)
{
    cout<<endl<<*it;
}
for(auto element:v)
{
    cout<<element<<endl;
}
vector<int> v1(3,10);
for(int i=0;i<v1.size();i++)
{
    cout<<v1[i];
}

swap(v,v1);
for(auto element:v)
{
    cout<<element<<endl;
}
for(auto element:v1)
{
    cout<<element<<endl;
}
v1.pop_back();
for(auto element:v1)
{
    cout<<element<<endl;
}
v.insert(v.begin(),v1.begin(),v1.end());      ///MERGING TWO BST///

for(auto element:v)
{
    cout<<element<<endl;
}
}
