#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    int wt=11;
    vector<int> weight={3,2,4,5,1};
    vector<int> value={4,3,5,6,1};
    vector<int> dp(wt+1,0);
    for(int j=0;j<=wt;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(j-weight[i]>=0)
            {
                dp[j]=max(value[i]+dp[j-weight[i]],dp[j]);
            }
        }
    }
    cout<<dp[wt];

}