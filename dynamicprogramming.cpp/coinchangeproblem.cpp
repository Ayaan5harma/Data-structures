#include<bits\stdc++.h>
using namespace std;
const int inf= 1e9;

int count(int coins[],int amnt,int n)
{
   int dp[n+1][amnt+1];
  for(int i=0;i<=n;++i)
  {
      for(int j=0;j<=amnt;++j)
      {
          if(i==0)
          {
              dp[i][j]=inf;
          }
        else  if(j==0)
          {
              dp[i][j]=0;
          }
          else if(coins[i-1]>j)
     {
         dp[i][j]=dp[i-1][j];
          }
          else{
              dp[i][j]=min(1+dp[i-1][j],dp[i][j-coins[i-1]]);
          }
      }
  }
  return dp[n][amnt]>1e9?-1:dp[n][amnt];   
}


int main()
{  int n;
cin>>n;

    int coins[]={1,2,5};
    int amnt;
    cin>>amnt;
    cout<<count(coins,amnt,n);
}