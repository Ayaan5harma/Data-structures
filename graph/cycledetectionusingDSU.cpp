#include<iostream>
#include<vector>
const int N=1e4;
using namespace std;
vector<int> parent(N);

void makesets(int v)
{
  parent[v]=v;
}
int findset(int v)
{
    if(v==parent[v])
    {
    return v;
    }
    
    return parent[v]=findset(parent[v]);
}
void unionset(int a,int b)
{
    a=findset(a);
    b= findset(b);
    if(a!=b)
    {
    parent[b]=a;
    }
}
int main()
{
int v,e;
cin>>v>>e;
vector<vector<int>> graph;
bool cycle=false;

for(int i=0;i<N;i++)
{
    makesets(i);
}

for(int i=0;i<e;i++)
{
    int x,y;
    cin>>x>>y;
    graph.push_back({x,y});
  /*   graph[x].push_back(y);
    graph[y].push_back(x) */;

}
for(auto x :graph)
{
    int u=x[0];
    int v= x[1];
    
    int f1=findset(u);
    int f2=findset(v);

    if(f1==f2)
    {
        cycle =true;
    }
    else{
        unionset(u,v);
    }
    
    
    }
    if(cycle)
    {
        cout<<" graph is cyclic";
    }
    else
    {
        cout<<"graph is not cyclic";
    }
}