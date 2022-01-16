#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
const int N= 1e4;
vector<int> adjl[N];
bool visited[N];
/* void dfs(int  node)
{
    visited[node]=1;
    cout<<node<<" ";

    vector<int> :: iterator it;
    for(it=adjl[node].begin();it!=adjl[node].end();it++)
    {
        if(visited[*it]);
        else
        {
            dfs(*it);
        }
    }
} */
int main()
{
  int v,e;
  cin>>v>>e;
  stack<int>st;

  for(int i=0;i<e;i++)
  {
      int x,y;
      cin>>x>>y;
      adjl[x].push_back(y);
      adjl[y].push_back(x);

  }

  // DFS//
  for(int i=0;i<N;i++)
  {
      visited[i]=0;

  }
  st.push(1);
  visited[1]=1;

  while(!st.empty())
  {
      int node =st.top();
      st.pop();
      cout<<node<<" ";

      vector<int> :: iterator it;
      for(it=adjl[node].begin();it!=adjl[node].end();it++)
      {
          if(visited[*it]);
          else{
              visited[*it]=1;
              st.push(*it);
          }
      }

  }
 
}