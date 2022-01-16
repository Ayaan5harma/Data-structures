
//cycle in undirected graph
/* #include<bits/stdc++.h>

using namespace std;

bool iscycle(int src,vector<vector<int>>&adj,vector<bool>&visited,int parent)
{
 visited[src]=true;
	for(auto i:adj[src])
	{
		if(i!=parent)
		{
			if(visited[i])
			{
				return true;
			}
			if(!visited[i] && iscycle(i,adj,visited,src))
			{
				return true;
			}
		}
	}
	return false;
}

int main()
{
	int n,m;
	cin>>n>>m;
   
	
	vector<vector<int>>adj(n);
	
	for(int i=0;i<m;i++)
	{
		 int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	bool cycle=false;
	
	
	vector<bool> visited(n,0);
	for(int i=0;i<n;i++)
	{
		if(!visited[i] && iscycle(i,adj,visited,-1))
		{
			cycle=true;
		}
	}
	if(cycle)
	{
		cout<<"cycle is present";
	}
	else
	{
		cout<<"cycle is not present";
	}
} */

//check cycle in directed graph
#include<iostream>
#include<vector>
const int N=1e3;
using namespace std;
vector<int> adj[N];

bool iscycle(vector<int>adj[],vector<bool>&visited,int src)
{
	visited[src]=true;
	vector<int> :: iterator it;
	for(it=adj[src].begin();it!=adj[src].end();it++)
	{
      if(visited[*it])
	  {
		  return true;
	  }
	  if(!visited[*it]&& iscycle(adj,visited,*it))
	  {
		  return true;
	  }
	}
	return false;
}
int main()
{
  int v,e;
  cin>>v>>e;
  vector<bool> visited(v,0);


  for(int i=0;i<e;i++)
  {
      int x,y;
      cin>>x>>y;
      adj[x].push_back(y);
    

  }

  bool cycle=false;
  for(int i=0;i<v;i++)
  {
	  if(!visited[i]&& iscycle(adj,visited,i))
	  {
		  cycle=true;
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

