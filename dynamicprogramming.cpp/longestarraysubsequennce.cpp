#include<bits/stdc++.h>
using namespace std;

int lis(vector<int>arr,int n)
{
    int lis[n];
    lis[0]=1;

    for(int i=1;i<n;i++)
    {
        lis[i]=1;
        for(int j=0;j<i;j++)
        {
            if(arr[i]>arr[j] && lis[i]<lis[j]+1)
            {
                lis[i]=lis[j]+1;
            }
        }
    }
     int max=lis[0];
    for(int i=0;i<n;i++)
    {
     
        if(max<lis[i])
        {
            max=lis[i];
        }
    }
    return max;
}
//const int N=1e6;
//int dp[N];
//int lis(vector<int> a,int n)
//{
   //if(dp[n]!=-1)
    //return dp[n];

    //dp[n]=1;
    //for(int i=0;i<n;i++)
    //{
        //if(a[n]>a[i])
        //{
      //      dp[n]=max(dp[n],1+lis(a,i));
    //    }
  //  }
//}
int main()
{
    // for(int i=0;i<N;i++)
    //{
      //  dp[i]=-1;
    //}
    int n;
    cin>>n;

    vector <int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   cout<<lis(arr,n);
}