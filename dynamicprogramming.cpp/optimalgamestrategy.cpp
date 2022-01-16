#include<bits\stdc++.h>
using namespace std;
const int N=1e3;
vector<int>arr;
int dp[N][N];
int solve(int i,int j)
{
    if(i==j)
    {
        return arr[i];
    }
    if(i>j)
    {                                               ///commented term when we use dp (memoization)//
        return 0;
    }
  /*   if(dp[i][j]!=-1)
    {
        return dp[i][j];
    } */
    int choice1= arr[i]+ min(solve(i+2,j),solve(i+1,j-1));
    int choice2= arr[j]+min(solve(i,j-2),solve(i+1,j-1));

    /*  dp[i][j]= max(choice1,choice2);
     return dp[i][j]; */
     return max(choice1,choice2); 
}
int main()
{
    int n;
    cin>>n;
    arr=vector<int>(n);
  /*   for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            dp[i][j]=-1;
        }
    }  */
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<solve(0,n-1);

}