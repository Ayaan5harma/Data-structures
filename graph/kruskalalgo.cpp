#include<bits/stdc++.h>
using namespace std;

const int N=1e5+3;
vector<int> parent(N);

void make_sets(int x)
{
    parent[x]=x;

}
int find_set(int x)
{
    if(x==parent[x])
    {
        return x;
    }
    return parent[x]=find_set(parent[x]);
}
void union_sets(int  a,int b)
{
    a=find_set(a);
    b=find_set(b);
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
 vector<vector<int>> adj;
 int n,m;
 cin>>n>>m;               //vertices and edges//
 for(int i=0;i<m;i++)
 {
   int u,v,w;
   cin>>w>>u>>v;
   adj.push_back({w,u,v});

 }
 sort(adj.begin(),adj.end());
 int cost=0;
 for(auto i:adj)
 {   
     int w=i[0];
     int u=i[1];
     int v=i[2];
     int  x=find_set(u);
     int y=find_set(v);
     if(x==y)
     {
         continue;
     }
     else{
         cout<<u<<"-->"<<v<<endl;
         union_sets(u,v);
         cost+=w;
     }
 }
 cout<<cost;
}

/* 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int inf =1e5;
vector<int> parent(inf);
void makeset(int v)
{
    parent[v]=v;
}
int findset(int v)
 {
     if(v==parent[v])
     {
         return v;
     }
     else{
     return parent[v]=findset(parent[v]);
 }
 }
void unionset(int a,int b)
 {
  a=findset(a);
  b=findset(b);
  if(a!=b)
  {
    parent[b]=a;
  }
 }
int main()
{
    vector<vector<int> >graph;
    int v,e;
    cin>>v>>e;
for(int i=0;i<inf;i++)
{
   makeset(i);
}

    for(int i=0;i<e;i++)
    {
     int w,x,y;

     cin>>w>>x>>y;
    graph.push_back({w,x,y});
    }
    sort(graph.begin(),graph.end());
    int count=0;

    for(auto i :graph)
    {
        int w=i[0];
        int x=i[1];
        int y=i[2];

        int f1=findset(x);
        int f2=findset(y);
        if(f1==f2)
        {
            continue;
        }
        else{
            cout<<x<<"-->"<<y<<endl;
            count+=w;
            unionset(x,y);

        }
    }
    cout<<count;
} */