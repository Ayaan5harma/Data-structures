#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int v,e;
   vector<vector<int>> adj(v)    ;
   vector<bool> vis(v,0);
   vector<int> components;
int countcomponents(int idx)
{
    if(vis[idx])
    {
        return 0;
    }
    vis[idx]=true;
    int ans=1;
  for(auto it: adj[idx])
  {
     if(!vis[it])
     {
         ans+=countcomponents(it);
     }
  }
  return ans;
}
int main()
{
   
   cin>>v>>e;


   for(int i=0;i<e;i++)
   {
      int x,y;
      cin>>x>>y;
      adj[x].push_back(y);
      adj[y].push_back(x);
   }
   for(int i=0;i<e;i++)
   {
         if(!vis[i])
         {
             components.push_back(countcomponents(i));
         }
   }
   for(auto it: components)
   {
       cout<<it<<" ";
   }



}