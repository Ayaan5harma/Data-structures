#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int n;
    cin>>n;
 int dp[n+1];           // |
for(int i=0;i<=n;i++)    //| _ 
 {                       //| _> the whole thing can be easily written as vector<int> dp(n+1,0)
     dp[i]=0;            //|  
 }                       //|
 dp[0]=1;
 dp[1]=1;

 for(int i=2;i<=n;i++) 
 {
     dp[i]=dp[i-1]+(i-1)*dp[i-2];
 }
 cout<<dp[n];
 

}