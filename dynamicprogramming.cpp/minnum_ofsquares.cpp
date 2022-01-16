#include<iostream>
using namespace std;
const int mod = 1e5+7,N=1e7+4;
int dp[N];
int min_numofsquares(int n)
{
 if(dp[n]!=mod)
 {
     return dp[n];
 }
  
  for(int i=1;i*i<n;i++)
  {
      dp[n]=min(dp[n],1+min_numofsquares(n-i*i));
  }
  return dp[n];
}
int main()
{
  
  for(int i=0;i<N;i++)
  {
      dp[i]=mod;
  }
   int n;
    cin>>n;
cout<<min_numofsquares(n);
    
}