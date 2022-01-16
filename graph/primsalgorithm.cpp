#include<iostream>
using namespace std;
#define  inf 1e9+3

int minimumkey(int dis[],int visited[])
{
    int minimum=inf;
    int vertex;
    for( int index=0;index<5;index++)
    {
        if(visited[index]==0 && dis[index]<minimum)
        {
              vertex=index;
            minimum=dis[index];
          
        }
    }
    return vertex;
}
void primsalgo(int graph[5][5])
{
    int parent[5];
    int visited[5];
    int dis[5];
    dis[0]=0;
    parent[0]=-1;
    for(int i=0;i<5;i++)
    {
        dis[i]=inf;
        visited[i]=0;
    }
    
    int minkey;
    for(int i=0;i<5;i++)
    {
         minkey=minimumkey(dis,visited);
        visited[minkey]=1;
    }
    for(int j=0;j<5;j++)
    {
        if(graph[minkey][j]!=0 && visited[j]==0 && graph[minkey][j]<dis[j])
        parent[j]=minkey;
        dis[j]=graph[minkey][j];
    }
    for(int i=0;i<5;i++)
    {
        cout<<parent[i]<<" "<<i<<" "<<graph[i][parent[i]];
    }

}

int main()
{
    int graph[5][5]= {{3, 2, 1, 9, 0},  
                      {5, 1, 2, 10, 4},  
                      {0, 4, 1, 0, 9},  
                      {8, 10, 0, 2, 10},  
                      {1, 6, 8, 11, 0},  
                     }; 

    primsalgo(graph);
    return 0;                  
}