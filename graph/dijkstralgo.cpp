 #include<bits/stdc++.h>
 using namespace std;

const int inf=1e7;
const int N =1e3;
 
 


int main()
{
    int n,m;

 vector<vector<pair<int,int>>>graph(n+1);


vector<int> dis(n+1,inf);
set<pair<int,int>> st;
  
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }
    int src;
    cin>>src;
 
    dis[src]=0;
    
    st.insert({0,src}) ;
 

    while(!st.empty())
    {
        auto x=*st.begin();        // give smallest element from set
        st.erase(x);
        for(auto it:graph[x.second])
        {
            if(dis[it.first]>dis[x.second]+it.second)   // it.first = node v  (vertex)  pair<int,int>
            {                                           // it.second=node w  (weight)   pair<int,int>
                st.erase({dis[it.first],it.first});
                dis[it.first]=dis[x.second]+it.second;
                st.insert({dis[it.first],it.first});
            }
        }
        
    }
    for(int i=0;i<=n;i++)
    {
        if(dis[i]<inf)
        {
            cout<<dis[i]<<" ";

        }
        else{
            cout<<"-1";
        }
    }
}


/*
 4 4
1 2 24
1 4 20
3 1 3
4 3 12 
*/




