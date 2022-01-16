/* #include<bits/stdc++.h>
using namespace std;
const int N =1e5+3;
const int inf =1e9+5;
int cost=0;
vector<vector<int>> g[N];
vector<int> parent(N);
vector<int> dis(N);
vector<bool> visited(N);

void prims_mst(int source)
{
 for(int i=0;i<N;i++)
 {
     dis[i]=inf;

 }
 set<vector<int>> s;                  //weight & vertex//  
 dis[source]=0;
 s.insert({0,source});
 while(!s.empty())
 {
auto x=*(s.begin());
s.erase(x);
visited[x[1]]=true;
int u=x[1];
int v=parent[x[1]];
int w=x[0];
cout<<u<<" "<<v<<" "<<w<<endl;
cost+=w;
for(auto it: g[x[1]])
{
    if(visited[it[0]])
    {
        continue;
    }
    if(dis[it[0]]>it[1])
    {
        s.erase({dis[it[0]],it[0]});
        dis[it[0]=it[1]];
        s.insert({dis[it[0]],it[0]});
        parent[it[0]]=x[1];
    }
   }
  }

} */
#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
const int inf=1e9;
vector<vector<int>> graph;
set<vector<int>> st;
vector<bool> vis(N);
vector<int> parent(N);
vector<int> dis(N);
void prims_mst(int src)
{
   for(int i=0;i<N;i++)
   {
       dis[i]=inf;
   }
   dis[src]=0;
  st.insert({0,src});
while(!st.empty())
{
    auto x=*(st.begin());
    st.erase(x);
    vis[x[1]]=true;
    int go = x[1];
    int lets=  parent[x[1]];
    int weight=   x[0];

    for(auto it: graph[x[1]])
    {
       if(vis[it[1]])
    {
        continue;
    }
    if(dis[it[0]]>it[1])
    {
        st.erase({dis[it[0]],it[0]});
        dis[it[0]]=it[1];
        st.insert({dis[it[0]],it[0]});
        parent[it[0]]=x[1];
    }
    }
}
   
   
}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
      graph.push_back({u,v,w});
    }
    
   

}