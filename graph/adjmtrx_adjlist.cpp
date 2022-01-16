#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int N= 1e4;
vector<int> adjl[N];
//adjacency matrix
int main()
{
    int vertices,edges;
   /*   cin>>vertices>>edges;

     vector<vector<int>> adjm(vertices+1,vector<int>(vertices+1));  //2D array

     for(int i=0;i<edges;i++)
     {
         int x,y;
         cin>>x>>y;

         adjm[x][y]=1;
         adjm[y][x]=1;

     }
     
     for(int i=1;i<edges+1;i++)
     {
        
      for(int j=1;j<edges+1;j++)
      {
          cout<<adjm[i][j];
      }
      cout<<endl;

     } */


     //adjacency list;

     cin>>vertices>>edges;
  for(int i=0;i<edges;i++)
  {
      int x,y;
      cin>>x>>y;

      adjl[x].push_back(y);
      adjl[y].push_back(x);
  }
for(int i=1;i<edges+1;i++){

cout<<i<<"->";
  vector<int> :: iterator it;
  for(it=adjl[i].begin();it!=adjl[i].end();it++)
  {
     
      cout<<*it;
  }
cout<<endl;
}
}

/* 
7 7
1 2
1 3
2 4 
2 5
2 6
2 7
7 3
 */
