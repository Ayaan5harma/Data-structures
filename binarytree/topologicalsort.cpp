#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj(n);
	 vector<int> indegree(n,0);
	  
    for(int i=0;i<m;i++)
    {
        int p,q ;
        cin>>p>>q;
        adj[p].push_back(q);
		indegree[q]++;
    }
	  
	    queue<int> q;
	for(int i=0;i<n;i++)
	    {
	        if(indegree[i]==0)
	        {
	            q.push(i);
	        }
	    }
	    while(!q.empty())
	    {
	        int temp=q.front();
	        q.pop();
	      
		   cout<<temp<<" ";
	        for(auto x:adj[temp])
	        {
	            indegree[x]--;
	       if(indegree[x]==0)
	    {
	         q.push(x);   
	    }
	    }
	    }
	  
        
	    
	}




   