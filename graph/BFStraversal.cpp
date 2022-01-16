#include<iostream>
#include<vector>
#include<queue>
using namespace std;
const int N= 1e4;
vector<int> adjl[N];
bool visited[N];
int main()
{
    
    int v,e;
    cin>>v>>e;

    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;

        adjl[x].push_back(y);
        adjl[y].push_back(x);
    }

    //now starting BFS;

    for(int i=0;i<N;i++)
    {
        visited[i]=0;
    }
    queue<int> q;

    q.push(1);
    visited[1]=1;

    while(!q.empty())
    {
        int topelement= q.front();
        q.pop();
 cout<<topelement<<" ";
        vector<int> :: iterator it;
        for(it=adjl[topelement].begin();it!=adjl[topelement].end();it++)
        {
            if(!visited[*it])
            {
                visited[*it]=1;
                q.push(*it);
            }
        }
       
    }


}