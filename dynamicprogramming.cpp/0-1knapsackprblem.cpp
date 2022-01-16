#include<iostream>
using namespace std;
const int N=1e3+4;
int value[N],weight[N];
int dp[N][N];
int knapsack(int n,int bori)
{
   if(bori<=0)
   {
       return 0;
   }
   if(n<=0)
   {
       return 0;
   }
  // if(dp[n][bori]!=-1)
   //{
     //  return dp[n][bori]
  // }
   if(weight[n-1]>bori)
   {
     //dp[n][bori]= 01knapsack(n-1,bori);  
     return knapsack(n-1,bori);
   }
   if(weight[n-1]<bori)
   {
      // dp[n][bori]=max(01knapsack(n-1,bori-weight[n-1])+value[n-1],01knapsack(n-1,bori))
      return max(knapsack(n-1,bori-weight[n-1])+value[n-1],knapsack(n-1,bori));
     
   }
    // return dp[n][bori];
  
}
int main()
{
    int n;
    cin>>n;
    //for(int i=0;i<N;i++)
    //{
      //  for(int j=0;j<N;j++)
        //{
          //  dp[i][j]=-1;
        //}
    //}

    for(int i=0;i<n;i++)
    {
  cin>>weight[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>value[i];
    }
int bori;
cin>>bori;
cout<<knapsack(n,bori);

}