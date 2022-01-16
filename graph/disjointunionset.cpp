#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+3;
vector<int> parent(N);
vector<int> size(N);
void make_sets(int v)
{
    parent[v]=v;
    size[v]=1;
}
int find_set(int v)
{
    if(v==parent[v])
    {
        return v;
            }
 return parent[v]=find_set(parent[v]);    //path compression
}

/*

void union_sets(int a,int b)
{
    a=find_set(a);
    b=find_set(b);
    if(a!=b)
    {                                            
        if(size[a]<size[b])               //*  using this time complexity will be O(1)
        {                                
            swap(a,b);
            parent[b]=a;
            size[a]+=size[b];
        }
    }
}
*/
void union_sets(int a,int b)
{
    a=find_set(a);
    b=find_set(b);                       //* using this Time complexity is logn
    if(a!=b)
    {
        parent[b]=a;
    }
}

int main()
{
    for(int i=0;i<N;i++)
    {
        make_sets(i);
    }
  
    vector<vector<int>>edges;
    int v,e;
    cin>>v>>e;
    for(int i=0;i<e;i++)
    {
       int u,v;
     cin>>u>>v; 
     edges.push_back({u,v});  
    }
    bool cycle=false;
    for(auto i:edges)
    {
        int u=i[0];
        int v=i[1];
        int x=find_set(u);
        int y=find_set(v);
        if(x==y)
        {
            cycle =true;
        }
        else{
            union_sets(u,v);
        }
    }
    if(cycle)
    {
        cout<<"cycle is present";

    }
    else{
         cout<<"cycle is not present";
    }
}