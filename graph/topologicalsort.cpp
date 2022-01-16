/* 
queue
 */
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
const int N = 1e3;
vector<int> adj[N];
vector<int> indegree(N,0);
int main()
{
    int v,e;
    cin>>v>>e;
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;

        adj[x].push_back(y); // only possible in directed acyclic graph
      
        indegree[y]++;

    }
    queue<int> q;

for(int i=0;i<e;i++)
{
    if(indegree[i]==0)
    {
        q.push(i);
    }
}
while(!q.empty())
{
    int x=q.front();
    q.pop();
    cout<<x<<" ";
    vector<int> ::iterator  it;
    for(it=adj[x].begin();it!=adj[x].end();it++)
    {
        indegree[*it]--;
        if(indegree[*it]==0)
        {
            q.push(*it);
        }
    }
}
}