/* #include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
#include<cmath> */
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> graph;
vector<bool> visited;
vector<int> col ;
bool bipart ;
void color(int idx,int currclr)
{
    if(col[idx]!=-1 && col[idx]!=currclr)
    {
        bipart=false;
        return;
    }

     if(visited[idx])
     {
         return;
     }
      col[idx]=currclr;
      visited[idx]=true;
      for(auto it:graph[idx])
      {
        if(!visited[it])
        {
         color(it,currclr xor 1);
        }
      }
}

int main()
{
   int v,e;
   cin>>v>>e;
  graph= vector<vector<int>> (v);
  visited=vector<bool> (v,false);
  col=vector<int> (v,-1);
  bipart=true;


   for(int i=0;i<e;i++)
   {
       int x,y;
       cin>>x>>y;

       graph[x].push_back(y);
    graph[y].push_back(x);
   } 

   for(int i=0;i<e;i++)
   {
       if(!visited[i])
       {
           color(i,0);     
       }
    }
    if(bipart)
    { 
        cout<<"graph is bipartite";
    }
    else{
        cout<<"graph is not bipartite";
    }
}